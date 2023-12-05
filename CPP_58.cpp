[PYTHON]
def common(l1, l2):
    return list(set(l1).intersection(l2))
[/PYTHON]
[TESTS]
# Test case 1:
assert common([1, 4, 3, 34, 653, 2, 5], [5, 7, 1, 5, 9, 653, 121]) == [1, 5, 653]
# Test case 2:
assert common([5, 3, 2, 8], [3, 2]) == [2, 3]
[/TESTS]
