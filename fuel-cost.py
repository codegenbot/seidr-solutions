Here is the completed code:

def fuel_cost(vector):
    return sum((i//3-2) for i in vector)

# Your input here (as a list of integers)
vector = [int(i) for i in input().split()]
print(fuel_cost(vector))