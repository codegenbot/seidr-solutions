def fuel_cost(vector):
    return sum((i-1)//3 - 2 for i in map(int, input("Enter space-separated positive integers:").split()))

print(fuel_cost(input("Enter space-separated positive integers:")))