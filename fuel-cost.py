def fuel_cost():
    arr = list(map(int, input("Enter space-separated positive integers: ").split()))
    return sum((n-1)//3 - 2 for n in arr)