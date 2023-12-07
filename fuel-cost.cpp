[PYTHON]
def fuel_cost(vehicle_mass):
    # Calculate the fuel cost
    fuel_cost = vehicle_mass * 3
    return int(fuel_cost) - 2
[/PYTHON]
[TESTS]
# Test case 1:
assert fuel_cost(18) == 54
# Test case 2:
assert fuel_cost(1684) == 5306
# Test case 3:
assert fuel_cost(7935) == 23753
[/TESTS]
