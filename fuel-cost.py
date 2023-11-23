def fuel_cost():
    nums = list(map(int, input().split()))
    result = sum(num//3 - 2 for num in nums)
    return result

print(fuel_cost())