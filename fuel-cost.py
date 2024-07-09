```
import math
def fuel_cost(vector):
    return sum(math.floor(i / 3) - 2 for i in vector)

vector = [int(x) for x in input("Enter a list of positive integers (space separated): ").split()]  
print(fuel_cost(vector))