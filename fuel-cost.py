```
def calculate_fuel_cost(fuel_costs):
    return sum((max(0, (fuel // 3) - 2) for fuel in fuel_costs))