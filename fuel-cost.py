def fuel_cost(vector):
    return sum((int(i) // 3 - 2) for i in map(int, vector))

print(fuel_cost(input("Enter space-separated positive integers: ").split()))