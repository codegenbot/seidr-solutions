
[PYTHON]
def cut_vector(vector):
    # Find the spot where, if you cut the vector, the numbers on both sides are either equal, or the diﬀerence is as small as possible.
    min_diff = math.inf
    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    return cut_index, min_diff
[/PYTHON]
[TESTS]
# Test case 1:
assert cut_vector([1, 2, 3, 4]) == (2, 0)
# Test case 2:
assert cut_vector([1, 2, 3, 4, 5]) == (2, 1)
# Test case 3:
assert cut_vector([1, 2, 3, 4, 5, 6]) == (3, 3)
# Test case 4:
assert cut_vector([1, 2, 3, 4, 5, 6, 7]) == (3, 4)
# Test case 5:
assert cut_vector([1, 2, 3, 4, 5, 6, 7, 8]) == (4, 6)
[/TESTS]
