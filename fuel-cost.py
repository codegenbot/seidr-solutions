def fuel_cost(vec):
    return sum([max(0, num // 3 - 2) for num in vec])


# Read input from user
vec = list(map(int, input().split()))
print(fuel_cost(vec))