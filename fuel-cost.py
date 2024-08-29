def fuel_cost(fuel_prices):
    return sum((p // 3 - 2) for p in map(int, input().split()))