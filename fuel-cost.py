def calculate_fuel_cost(fuel_costs):
    return sum((fuel // 3 - 1) for fuel in fuel_costs)