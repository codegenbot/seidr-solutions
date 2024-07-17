Here is the solution in Python:

def fuel_cost(input_list):
    return sum((i // 3) - 2 for i in input_list if i > 0)

# test cases
print(fuel_cost([1])) 
print(fuel_cost([6]))
print(fuel_cost([1, 7]))
print(fuel_cost([1, 8]))
print(fuel_cost([1, 9]))
print(fuel_cost([1, 10]))