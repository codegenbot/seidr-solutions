def fuel_cost(arr):
    return sum((x // 3 - 1) for x in arr)


arr = list(map(int, input().split()))
print(fuel_cost(arr))