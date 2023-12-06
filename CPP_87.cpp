[PYTHON]
def get_row(lst, x):
    result = []
    for i in range(len(lst)):
        for j in range(len(lst[i])):
            if lst[i][j] == x:
                result.append((i, j))
    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert get_row([[1, 2, 3], [4, 5, 6], [7, 8, 9]], 1) == [(0, 0)]
# Test case 2:
assert get_row([[1, 2, 3], [4, 5, 6], [7, 8, 9]], 3) == [(0, 2), (1, 2)]
# Test case 3:
assert get_row([[1, 2, 3], [4, 5, 6], [7, 8, 9]], 4) == [(1, 0)]
# Test case 4:
assert get_row([[1, 2, 3], [4, 5, 6], [7, 8, 9]], 5) == [(1, 1)]
# Test case 5:
assert get_row([[1, 2, 3], [4, 5, 6], [7, 8, 9]], 6) == [(1, 2), (2, 0)]
# Test case 6:
assert get_row([[1, 2, 3], [4, 5, 6], [7, 8, 9]], 7) == [(2, 0)]
# Test case 7:
assert get_row([[1, 2, 3], [4, 5, 6], [7, 8, 9]], 8) == [(2, 1)]
# Test case 8:
assert get_row([[1, 2, 3], [4, 5, 6], [7, 8, 9]], 9) == [(2, 2)]
[/TESTS]
