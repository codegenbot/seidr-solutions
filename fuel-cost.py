def fuel_cost(fuel_types):
    return sum((n // 3 - 2) for n in map(int, input().split()))