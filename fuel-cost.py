def fuel_cost(input_list):
    return sum((i // 3 - 2) for i in input_list)