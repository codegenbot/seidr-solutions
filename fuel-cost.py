def fuel_cost(fuel_prices):
    return sum((price // 3 - 2) for price in map(int, input().split()))