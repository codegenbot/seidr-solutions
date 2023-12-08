def get_fuel_cost(input_vector):
    result = sum([int((x / 3) - 2) for x in input_vector])
    return result