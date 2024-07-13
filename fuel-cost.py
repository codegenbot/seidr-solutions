def fuel_cost(fuel):
    return sum((n//3-2) for n in map(int, str(fuel).split(',')))