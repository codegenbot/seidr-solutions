```
import math
def calculate_fuel_cost(fuel_costs):
    return sum(math.floor(fuel / 3) - 2 for fuel in fuel_costs)