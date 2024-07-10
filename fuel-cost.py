Here is the Python solution for the fuel-cost problem:

def calculate_fuel_cost(fuel_costs):
    return sum((cost // 3 - 2) for cost in fuel_costs)

# test cases
print(calculate_fuel_cost([1]))  # 0
print(calculate_fuel_cost([6]))   # 0
print(calculate_fuel_cost([1, 7])) # 0
print(calculate_fuel_cost([1, 8])) # 0
print(calculate_fuel_cost([1, 9])) # 1
print(calculate_fuel_cost([1, 10])) # 1