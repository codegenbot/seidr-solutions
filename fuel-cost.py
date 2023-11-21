def fuel_cost(nums):
    return sum((num // 3) - 2 for num in nums)


nums = [int(input()) for _ in range(2)]
print(fuel_cost(nums))