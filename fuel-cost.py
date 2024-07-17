def fuel_cost(fuel):
    return sum((x // 3) - 2 for x in map(int, fuel.split()))