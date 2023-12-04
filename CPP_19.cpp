[PYTHON]
def get_unique_elements(my_list):
    return list(set(my_list))
[/PYTHON]
[TESTS]
# Test case 1:
assert get_unique_elements([]) == []
# Test case 2:
assert get_unique_elements([1]) == [1]
# Test case 3:
assert get_unique_elements([1, 2, 3, 2, 1]) == [1, 2, 3]
[/TESTS]
