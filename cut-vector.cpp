[PYTHON]
def cut_vector(v):
    n = len(v)
    if n == 0:
        return []
    if n == 1:
        return [v[0]]

    min_diff = float('inf')
    spot = -1
    for i in range(1, n):
        diff = abs(v[i] - v[i-1])
        if diff < min_diff:
            min_diff = diff
            spot = i

    left = []
    right = []
    for i in range(spot):
        left.append(v[i])
    for i in range(spot, n):
        right.append(v[i])

    return [left, right]
[/PYTHON]
[TESTS]
# Test case 1:
assert cut_vector([1, 2, 3, 4, 5, 6, 7, 8, 9, 10]) == [[1, 2, 3, 4, 5, 6], [7, 8, 9, 10]]
# Test case 2:
assert cut_vector([1, 2, 3, 4, 5]) == [[1, 2, 3], [4, 5]]
# Test case 3:
assert cut_vector([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]) == [[1, 2, 3, 4, 5, 6], [7, 8, 9, 10, 11]]
[/TESTS]
