def fuel_cost():
    arr = list(map(int, input().split()))
    return sum((i-2)//3 - 2 for i in arr)