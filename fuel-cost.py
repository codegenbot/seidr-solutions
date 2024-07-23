def fuel_cost(vector):
    return sum((i//3) - 2 for i in map(int, vector.split()) if i > 0)

vector = input("Enter space-separated positive integers:")
print(fuel_cost(vector))