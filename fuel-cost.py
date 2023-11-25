import math

def fuel_cost(vector):
    return sum([math.floor(x/3) - 2 for x in vector])

# Read input from user
vector = []
while True:
    try:
        vector.append(int(input()))
    except EOFError:
        break

# Calculate fuel cost and print result
result = fuel_cost(vector)
print(result)