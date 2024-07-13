```
def fuel_cost(vector):
    return sum((i-2)//3 - 2 for i in vector)

vector = [1, 5, 7]
print(fuel_cost(vector))