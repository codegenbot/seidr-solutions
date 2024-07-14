def fuel_cost(vector):
    return sum((num // 3) - 2 for num in vector)

vector = [input("Enter a list of integers (space-separated): ").split()]
print(fuel_cost(vector[0]))