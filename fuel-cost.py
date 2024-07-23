def fuel_cost(vector):
    return sum((i//3) - 2 for i in map(int, input("Enter space-separated positive integers:").split()) if i > 0)

print(fuel_cost(input("Enter space-separated positive integers:").split()))