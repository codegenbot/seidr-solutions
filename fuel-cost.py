Here is the modified code:

def fuel_cost(input_vector):
    return sum((i//3-2) for i in input_vector)

input_vector = [1, 6]
print(fuel_cost(input_vector))  
input_vector = [1, 7]
print(fuel_cost(input_vector)) 
input_vector = [1, 8]
print(fuel_cost(input_vector)) 
input_vector = [1, 9]
print(fuel_cost(input_vector)) 
input_vector = [1, 10]
print(fuel_cost(input_vector))