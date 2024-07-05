def fuel_cost(vector):
    return sum(math.floor(i / 3) - 2 for i in vector)

print(fuel_cost(4))
print(fuel_cost([9095, 3955, 9735, 6757]))