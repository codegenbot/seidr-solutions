def fuel_cost(nums):
    return sum((num // 3) - 2 for num in nums)

input_values = input().split()
nums = list(map(int, input_values))

print(fuel_cost(nums))