def fuel_cost():
    nums = list(map(int, input().split()))
    total = 0
    for num in nums:
        new_num = num // 3 - 2
        total += new_num
    return total

print(fuel_cost())