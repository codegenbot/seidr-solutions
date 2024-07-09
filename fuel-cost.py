```
def fuel_cost(input_vector):
    return sum((i // 3) - 2 if i >= 4 else i // 3 - 2 for i in input_vector)