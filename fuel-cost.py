def calculate_fuel_cost(fuel_costs):
    return sum((cost // 3) - 2 for cost in map(int, input().split()))