def fuel_cost(input_vector):
    return sum((num // 3) - 2 for num in input_vector)