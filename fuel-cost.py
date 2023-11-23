import math

def fuel_cost(vector):
    return sum([math.floor(x/3) - 2 for x in vector])

# Read input from user
vector = list(map(int, input().split()))

# Call the function and print the result
print(fuel_cost(vector))