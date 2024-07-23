nums = list(map(int, input().split()))
result = sum((num // 3 - 2) for num in nums) + 2 * len(nums)
print(result)