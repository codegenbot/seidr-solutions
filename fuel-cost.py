def fuel_cost(vector):
    return sum([(int(x) // 3) - 2 for x in vector]) + 2