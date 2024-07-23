Here is the Python code that solves the problem:

def fuel_cost(input_vector):
    return sum((i // 3) - 2 for i in input_vector)

print(fuel_cost([1]))  # 0
print(fuel_cost([6]))   # 0
print(fuel_cost([7]))   # 0
print(fuel_cost([8]))   # 0
print(fuel_cost([9]))   # 1
print(fuel_cost([10]))  # 1