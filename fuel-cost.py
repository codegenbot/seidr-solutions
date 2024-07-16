```
def fuel_cost(input_vector):
    return sum(((i-1)//3 + 1) - 2 for i in input_vector)