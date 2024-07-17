def calculate_fuel_cost(fuel_costs):
    return sum((n // 3) - 2 for n in fuel_costs)