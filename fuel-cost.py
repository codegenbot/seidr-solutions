def fuel_cost(vector):
    return sum([(x - 2) // 3 for x in vector]) 

vector = list(map(int, input().split()))
print(fuel_cost(vector))