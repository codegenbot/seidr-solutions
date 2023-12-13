import math

def fuel_cost(vector):
    return sum((x // 3 - 2) for x in vector)

input_str = input()
input_list = list(map(int, input_str.split()))
result = fuel_cost(input_list)
print(result)