def fuel_cost(fuel_prices):
    return sum((fuel_price // 3) - 2 for fuel_price in fuel_prices)