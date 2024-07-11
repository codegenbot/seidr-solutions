import math
def fuel_cost():
    arr = list(map(int, input("Enter space-separated positive integers: ").split()))
    return sum(math.floor(n/3) - 2 for n in arr)