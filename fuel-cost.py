def calculate_fuel_cost(fuel_costs):
    return sum((fuel + 2) // 3 - 2 for fuel in fuel_costs)

fuel_costs = [1, 2, 3]
print(calculate_fuel_cost(fuel_costs))