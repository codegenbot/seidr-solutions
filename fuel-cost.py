def fuel_cost(arr):
    return sum([(num // 3 - 2) for num in arr])


# Read input
arr = list(map(int, input().split()))
print(fuel_cost(arr))