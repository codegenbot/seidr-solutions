def fuel_cost(input_vector):
    return sum((x // 3) - 2 for x in input_vector if x % 3 == 0)