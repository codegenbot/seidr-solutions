```
def fuel_cost(vector):
    return sum((i//3) - 2 for i in vector)

# Test cases
print(fuel_cost([1,2,3,4,5]))
print(fuel_cost([7,12,15,23]))
print(fuel_cost([30,32]))