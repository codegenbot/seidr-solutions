def fuel_cost():
    total = 0
    n = int(input().strip())
    for _ in range(n):
        num = int(input().strip())
        total += max(0, num // 3 - 2)
    return total


print(fuel_cost())