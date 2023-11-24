def fuel_cost(vector):
    return sum([(max(x - 2, 0)) // 3 for x in vector])

vector = [int(x) for x in input().split()]
print(fuel_cost(vector))