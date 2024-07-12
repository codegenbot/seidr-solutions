def fuel_cost(input_vector):
    return sum(math.floor(x/3)-2 for x in input_vector)