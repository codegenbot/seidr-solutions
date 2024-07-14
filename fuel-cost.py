```
def fuel_cost(vector):
    return sum((i // 3) if i % 3 == 0 else (i // 3 - 1) for i in vector)