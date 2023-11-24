def fuel_cost(arr):
    return sum([(x - 2) // 3 for x in arr])

arr = list(map(int, input().split()))
print(fuel_cost(arr))