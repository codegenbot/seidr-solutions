
[PYTHON]
def cut_vector(vector):
    # Find the spot where, if you cut the vector, the numbers on both sides are either equal, or the difference is as small as possible
    min_diff = float('inf')
    cut_index = -1
    for i in range(len(vector)):
        diff = abs(vector[i] - vector[-1])
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    # Store the subvectors in separate variables
    subvector1 = vector[:cut_index + 1]
    subvector2 = vector[cut_index + 1:]

    return subvector1, subvector2
[/PYTHON]
[TESTS]
# Test case 1:
assert cut_vector([1, 0]) == ([1], [0])
# Test case 2:
assert cut_vector([1, 10]) == ([1], [10])
# Test case 3:
assert cut_vector([1, 100]) == ([1], [100])
# Test case 4:
assert cut_vector([1, 1000]) == ([1], [1000])
# Test case 5:
assert cut_vector([1, 10000]) == ([1], [10000])
[/TESTS]
