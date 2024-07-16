```
import math

def fuel_cost(fuel_prices):
    return sum(math.floor(price / 3) - 2 for price in fuel_prices)