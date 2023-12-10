
[PYTHON]
def cut_vector(v):
    left = []
    right = []
    for i in range(len(v)):
        if v[i] % 2 == 0:
            left.append(v[i])
        else:
            right.append(v[i])
    return [left, right]
[/PYTHON]
[TESTS]
# Test case 1:
assert cut_vector([1, 2, 3, 4, 5, 6]) == [[1, 3, 5], [2, 4, 6]]
# Test case 2:
assert cut_vector([1, 2, 3, 4, 5, 6, 7]) == [[1, 3, 5, 7], [2, 4, 6]]
# Test case 3:
assert cut_vector([1, 2, 3, 4, 5, 6, 7, 8]) == [[1, 3, 5, 7], [2, 4, 6, 8]]
# Test case 4:
assert cut_vector([1, 2, 3, 4, 5, 6, 7, 8, 9]) == [[1, 3, 5, 7, 9], [2, 4, 6, 8]]
# Test case 5:
assert cut_vector([1, 2, 3, 4, 5, 6, 7, 8, 9, 10]) == [[1, 3, 5, 7, 9], [2, 4, 6, 8, 10]]
[/TESTS]
