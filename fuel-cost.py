```
import math

def fuel_cost(vector):
    return sum(math.floor(i // 3) - 2 for i in vector)

vector = [int(x) for x in input("Enter space-separated positive integers: ").split()]
if all(num > 0 for num in vector):
    print(fuel_cost(vector))
else:
    print("Error: All numbers must be greater than zero.")