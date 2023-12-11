[PYTHON]
def fuel_cost(vector):
    return sum([int(round(x / 3) - 2) for x in vector])
[/PYTHON]
[TESTS]
# Test case 1:
assert fuel_cost([1, 2, 3]) == 0
# Test case 2:
assert fuel_cost([4, 5, 6]) == 3
# Test case 3:
assert fuel_cost([7, 8, 9]) == 6
[/TESTS]
