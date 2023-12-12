
[PYTHON]
def fuel_cost(vector):
    return sum([round(x / 3) - 2 for x in vector])
[/PYTHON]
[TESTS]
# Test case 1:
assert fuel_cost([4, 5, 6]) == 7
# Test case 2:
assert fuel_cost([10, 20, 30]) == 15
# Test case 3:
assert fuel_cost([2, 3, 4, 5]) == 9
[/TESTS]
