vector = list(map(int, input("Enter a vector of integers separated by space: ").split()))
def fuel_cost(vector):
    return sum((i + 2) // 3 - 2 for i in vector)
print(fuel_cost(vector))