```
def calculate_fuel_cost(fuel_costs):
    return sum(int((fuel - 2) // 3) for fuel in fuel_costs)