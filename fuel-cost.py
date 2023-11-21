nums = list(map(int, input().split()))
def fuel_cost(nums):
    return sum((num // 3) - 2 for num in nums)
print(fuel_cost(nums))