import math

def fuel_cost(vector):
    result = 0
    for num in vector:
        new_num = math.floor(num/3) - 2
        result += new_num
    return result