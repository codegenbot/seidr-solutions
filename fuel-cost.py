def fuel_cost(arr):
    return sum(max(0, x // 3 - 2) for x in arr)


arr = list(map(int, input().split()))
print(fuel_cost(arr))