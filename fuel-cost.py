def fuel_cost(vector):
    return sum([(x // 3) - 2 for x in vector])

vector = list(map(int, input().split()))
print(fuel_cost(vector))