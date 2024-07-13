import math
def fuel_cost(vector):
    return sum(math.floor(i // 3) - 2 for i in vector if i > 0)

vector = list(map(int, input("Enter the vector of positive integers (space separated): ").split()))
print(fuel_cost(vector))