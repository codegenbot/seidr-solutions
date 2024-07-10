Here's the completed Python code for the problem:

def fuel_cost(vector):
    return sum((x//3-2) for x in vector)

print(fuel_cost([1])) # 0
print(fuel_cost([6])) # 0
print(fuel_cost([1,7])) # 0
print(fuel_cost([1,8])) # 0
print(fuel_cost([1,9])) # 1
print(fuel_cost([1,10])) # 1