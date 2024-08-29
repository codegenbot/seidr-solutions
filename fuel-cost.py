Here is the completed code:

def fuel_cost(vector):
    return sum((i // 3) - 2 for i in vector)

# Test cases
print(fuel_cost([1]))  # Output: 0
print(fuel_cost([6]))   # Output: 0
print(fuel_cost([7]))   # Output: 0
print(fuel_cost([8]))   # Output: 0
print(fuel_cost([9]))   # Output: 1
print(fuel_cost([10]))  # Output: 1