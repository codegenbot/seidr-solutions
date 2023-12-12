import math

def fuel_cost(vector):
    return sum([math.floor(x/3) - 2 for x in vector])

# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

# Call the function and print the result
result = fuel_cost(vector)
print(result)