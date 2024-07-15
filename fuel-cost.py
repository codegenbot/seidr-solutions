def fuel_cost(nums):
    return sum((num // 3 - 2) for num in nums)


# Read input
nums = list(map(int, input().split()))

# Calculate and print output
print(fuel_cost(nums))