vector = [int(x) for x in "1 2 3".split()]
def fuel_cost(vector):
    return sum((i // 3 - 2) for i in vector)
print(fuel_cost(vector))