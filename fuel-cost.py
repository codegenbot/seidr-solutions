def fuel_cost():
    nums = list(map(int, input().split()))
    total = sum((num // 3) - 2 for num in nums)
    return total


print(fuel_cost())