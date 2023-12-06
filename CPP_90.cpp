[PYTHON]
def next_smallest(lst):
    if len(lst) < 2:
        return None
    lst.sort()
    second_smallest = lst[1]
    for i in range(2, len(lst)):
        if lst[i] != second_smallest:
            return second_smallest
    return None
[/PYTHON]
[TESTS]
# Test case 1:
assert next_smallest([]) == None
# Test case 2:
assert next_smallest([-35, 34, 12, -45]) == -35
# Test case 3:
assert next_smallest([-35, 34, 12, -45, -35]) == -35
[/TESTS]
