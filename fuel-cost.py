def fuel_cost(nums):
    return sum([int(num/3) - 2 for num in nums])

nums = list(map(int, input().split()))
print(fuel_cost(nums))