def fuel_cost(nums):
    return sum((num // 3) - 2 for num in nums)


nums = []
for _ in range(2):
    nums.append(int(input()))

print(fuel_cost(nums))