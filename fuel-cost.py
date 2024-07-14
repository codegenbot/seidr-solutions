def fuel_cost(vector):
    return sum((i // 3) - 2 for i in vector)


vector = list(map(int, input("Enter space-separated positive integers: ").split()))
print(fuel_cost(vector))