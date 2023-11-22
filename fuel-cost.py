import math

def fuel_cost(vector):
    return sum((math.floor(num/3) - 2) for num in vector)

# Read input from user
vector = []
n = int(input())
for _ in range(n):
    vector.append(int(input()))

# Call the function and print the result
print(fuel_cost(vector))