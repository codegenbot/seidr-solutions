```
def fuel_cost(input_vector):
    return sum((int(i/3))//1 - 2 for i in input_vector)