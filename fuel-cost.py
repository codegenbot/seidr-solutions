def fuel_cost(vector):
    return sum((i-1) // 3 if i >= 3 else -1 for i in vector)

print(fuel_cost(list(map(int, input("Enter space-separated positive integers:").split()))))