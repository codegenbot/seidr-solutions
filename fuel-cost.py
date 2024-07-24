def fuel_cost(input_vector):
    return sum(((i + 2) // 3) - 2 for i in input_vector)