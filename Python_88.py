[PYTHON]
def sort_array(array):
    if sum(array[0], array[-1]) % 2 == 0:
        return sorted(array, reverse=True)
    else:
        return sorted(array)
[/PYTHON]
[TESTS]
# Test case 1:
assert sort_array([]) == []
# Test case 2:
assert sort_array([5]) == [5]
# Test case 3:
assert sort_array([2, 4, 3, 0, 1, 5]) == [0, 1, 2, 3, 4, 5]
# Test case 4:
assert sort_array([2, 4, 3, 0, 1, 5, 6]) == [6, 5, 4, 3, 2, 1, 0]
[/TESTS]
