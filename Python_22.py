[PYTHON]
def filter_integers(values: list) -> List[int]:
    return [x for x in values if isinstance(x, int)]
[/PYTHON]
[TESTS]
# Test case 1:
assert filter_integers([]) == []
# Test case 2:
assert filter_integers([1, 2, 3, "4", 5.0]) == [1, 2, 3]
# Test case 3:
assert filter_integers([1, 2, "3", 4.0, 5]) == [1, 2, 4, 5]
[/TESTS]
