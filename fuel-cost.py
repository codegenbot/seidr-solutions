def fuel_cost(vector):
    return sum((i//3) - 2 for i in filter(lambda x: x > 0, map(int, input("Enter space-separated positive integers:").split())))

print(fuel_cost(list(map(int, input("Enter space-separated positive integers:").split()))))