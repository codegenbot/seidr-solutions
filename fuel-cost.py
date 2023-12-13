import math
def fuel_cost(vector):
    return sum([x//3 - 2 for x in vector])
input_str = input()
vector = [int(x) for x in input_str.split(",")]
result = fuel_cost(vector)
print(result)