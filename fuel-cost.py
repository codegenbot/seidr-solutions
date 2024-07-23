def fuel_cost():
    arr = list(map(int, input().split()))
    total = sum((num // 3 - 2) for num in arr)
    return total * 3

print(fuel_cost())