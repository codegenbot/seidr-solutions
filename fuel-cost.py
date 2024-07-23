```
import math
vector = list(map(int, input().split()))
def fuel_cost(vector):
    return sum(i // 3 - 2 for i in vector)
print(fuel_cost(vector))