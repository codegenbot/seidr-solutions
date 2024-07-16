def fuel_cost(input_vector):
    return sum((i-0.5)//3 - 2 for i in input_vector)