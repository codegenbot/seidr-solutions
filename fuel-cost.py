[PYTHON]
def fuel_cost(vector):
    return sum([(x/3) - 2 for x in vector])
[/PYTHON]
[TESTS]
# Test case 1:
assert fuel_cost([1, 2, 3, 4, 5]) == 0
# Test case 2:
assert fuel_cost([1, 2, 3, 4, 5, 6]) == -1
# Test case 3:
assert fuel_cost([1, 2, 3, 4, 5, 6, 7]) == -2
[/TESTS]
