def fuel_cost(fuel_list):
    return sum((i // 3 - 2) for i in fuel_list)