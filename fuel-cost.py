```Python
# Test case 1:
print(fuel_cost([3,4,5]))

# Test case 2:
print(fuel_cost([1,2,3]))

def fuel_cost(vector):
    return sum((i//3)-2 for i in vector)