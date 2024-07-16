```
def fuel_cost(input_vector):
    return sum(((i-2)//3) for i in input_vector)