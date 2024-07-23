vector = list(map(int, input("Enter space-separated positive integers:").split()))
def fuel_cost(vector):
    return sum((i//3) - 2 for i in vector)
print(fuel_cost([int(i) for i in vector]))