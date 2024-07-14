def fuel_cost(vector):
    if not isinstance(vector, list) or all(isinstance(i, int) and i > 0 for i in vector):
        return "Invalid input"
    return sum((i // 3 - 2) for i in vector)