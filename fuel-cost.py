import math

def fuel_cost(vec):
    return sum([math.floor(x/3) - 2 for x in vec])

# Read input from user
vec = list(map(int, input().split()))

# Call the function and print the result
print(fuel_cost(vec))