def fuel_cost(vector):
    if any(x < 0 for x in vector):
        raise ValueError("All input values must be positive")
    return sum([int((x / 3) - 2) for x in vector])