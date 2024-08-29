def calculate_fuel_cost(fuel_costs):
    total = 0
    for cost in fuel_costs:
        total += (cost // 3) - 2
    return total