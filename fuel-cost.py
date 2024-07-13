```
def fuel_cost(vector):
    return sum((i//3-2) for i in vector)

vector = [int(i) for i in input().split()]
print(fuel_cost(vector))