def fuel_cost(nums):
    return sum((num // 3 - 2) for num in nums)


# Read input from user
nums = list(map(int, input().split()))
print(fuel_cost(nums))