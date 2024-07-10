def calculate_fuel_cost(fuel_costs):
    return sum((fuel / 3) - 2 for fuel in map(int, input().split()))