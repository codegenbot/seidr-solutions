def fuel_cost(input_vector):
    return sum((i//3-2) for i in input_vector)

print(fuel_cost([1, 6]))  # Output: 0
print(fuel_cost([1, 7]))  # Output: 0
print(fuel_cost([1, 8]))  # Output: 0
print(fuel_cost([1, 9]))  # Output: 1
print(fuel_cost([1, 10]))  # Output: 1