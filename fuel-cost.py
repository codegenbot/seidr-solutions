def fuel_cost(vector):
    return sum((x // 3 - 2) for x in vector)

input_vector = [6, 9, 12]
result = fuel_cost(input_vector)
result