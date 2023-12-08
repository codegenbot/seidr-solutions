[PYTHON]
def cut_vector(vector):
    min_diff = math.inf
    spot = 0
    for i in range(1, len(vector)):
        diff = abs(vector[i] - vector[i-1])
        if diff < min_diff:
            min_diff = diff
            spot = i
    return vector[:spot], vector[spot:]
[/PYTHON]
[TESTS]
# Test case 1:
assert cut_vector([1, 2, 3, 4, 5]) == ([1, 2, 3], [4, 5])
# Test case 2:
assert cut_vector([1, 2, 3, 4, 5, 6]) == ([1, 2, 3], [4, 5, 6])
# Test case 3:
assert cut_vector([1, 2, 3, 4, 5, 6, 7]) == ([1, 2, 3], [4, 5, 6, 7])
[/TESTS]
