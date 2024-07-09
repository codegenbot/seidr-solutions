```
def fuel_cost(input_vector):
    return sum((i // 3) - 2 if i > 8 else 0 for i in input_vector)