import math

def fuel_cost(vector):
    return sum([math.floor(num/3) - 2 for num in vector])

# Read input from user
vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except:
        break

# Call the function and print the result
print(fuel_cost(vector))