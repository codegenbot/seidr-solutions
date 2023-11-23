def fuel_cost(arr):
    return sum((x // 3 - 2) if x >= 2 else 0 for x in arr)


arr = list(map(int, input().split()))
print(fuel_cost(arr))