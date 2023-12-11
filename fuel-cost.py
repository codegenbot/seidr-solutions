[PYTHON]
def fuel_cost(vector):
    return sum([int(round((x / 3) - 2)) for x in vector])
[/PYTHON]
[TESTS]
# Test case 1:
assert fuel_cost([3, 6, 9, 12]) == 16
# Test case 2:
assert fuel_cost([4, 7, 10, 13]) == 23
# Test case 3:
assert fuel_cost([5, 8, 11, 14]) == 29
[/TESTS]
