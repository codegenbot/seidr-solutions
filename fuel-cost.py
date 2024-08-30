def fuel_cost(input_vector):
    return sum((n // 3 - 2) for n in input_vector)