def fuel_cost(input_vector):
    return sum((i//3-2) for i in input_vector)

print(fuel_cost([1, 6]))  
print(fuel_cost([1, 7]))  
print(fuel_cost([1, 8]))  
print(fuel_cost([1, 9]))  
print(fuel_cost([1, 10]))