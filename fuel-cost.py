```
def fuel_cost(vector):
    return sum((i//3-1) for i in vector)

print(fuel_cost(list(map(int, input("Enter space-separated positive integers:").split()))))