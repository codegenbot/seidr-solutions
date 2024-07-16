def fuel_cost(fuel_prices):
    return sum(((price + 2) // 3) - 2 for price in fuel_prices)