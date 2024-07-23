def fuel_cost(vector):
    return sum((int(i) -2) // 3 for i in map(int, input("Enter space-separated positive integers:").split()))

print(fuel_cost(input("Enter space-separated positive integers:").split()))