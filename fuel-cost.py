import math

def fuel_cost(vector):
    return sum([math.floor(x/3) - 2 for x in vector])

# Read input from user
vector = []
while True:
    try:
        x = int(input())
        vector.append(x)
    except EOFError:
        break

# Call the function and print the result
result = fuel_cost(vector)
print(result)