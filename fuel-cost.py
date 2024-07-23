```
def fuel_cost(vector):
    return sum((int(i)//3) - 2 for i in vector)

vector = list(map(int, input("Enter space-separated positive integers:").split()))
print(fuel_cost([i for i in vector if i>0]))