import math

def fuel_cost(vector):
    return sum([math.floor(num/3) - 2 for num in vector])

vector = []
while True:
    try:
        num = int(input())
        vector.append(num)
    except EOFError:
        break

print(fuel_cost(vector))