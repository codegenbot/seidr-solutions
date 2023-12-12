def fuel_cost(vec):
    return sum([x//3 - 2 for x in vec])

vec = list(map(int, input().split()))
print(fuel_cost(vec))