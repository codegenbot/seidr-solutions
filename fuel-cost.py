def fuel_cost():
    numbers = list(map(int, input().split()))
    total = sum(max(0, num // 3 - 2) for num in numbers)
    return total

print(fuel_cost())