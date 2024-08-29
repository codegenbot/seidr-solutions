```
def fuel_cost(fuel):
    return sum((i // 3) - 2 for i in map(int, str(fuel).split(',')))