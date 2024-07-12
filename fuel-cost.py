def fuel_cost():
    nums = list(map(int, input().split()))
    total = 0
    for num in nums:
        total += max(0, num // 3 - 2)
    return total

print(fuel_cost())