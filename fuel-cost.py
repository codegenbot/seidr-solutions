def fuel_cost(vector):
    return sum([int(x/3) - 2 for x in vector])

vector = [10, 4030, 2078, 1195, 8065, 8033, 7025, 2757, 8386, 2922, 7690]
fuel_cost = sum([int(x/3) - 2 for x in vector])
print(fuel_cost)