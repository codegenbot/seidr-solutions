def fuel_cost(vector):
    return sum((i // 3) - 2 for i in map(int, vector.split()))