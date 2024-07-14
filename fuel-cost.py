def fuel_cost(vector):
    return sum((i // 3) - 2 for i in vector)

vector = list(map(int, "5182 6701 9085 2732 114 5834 6429 5673 6510 7096".split()))
print(fuel_cost(vector))