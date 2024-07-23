def fuel_cost(vector):
    return sum((int(i) // 3) - 2 for i in vector if i > 0)

print(fuel_cost(list(map(int, input("Enter space-separated positive integers:").split()))))