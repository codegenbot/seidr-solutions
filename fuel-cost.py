def fuel_cost(vector):
    return sum(i//3 - 2 for i in vector)

print(fuel_cost([1, 5, 10, 25]))