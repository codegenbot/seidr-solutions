def fuel_cost(vector):
    return sum(max((i//3) - 2, 0) for i in vector)

print(fuel_cost([860, 7981, 9131, 516, 4009]))