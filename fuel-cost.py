def fuel_cost(fuel_costs):
    return sum((i//3 - 2) for i in fuel_costs)