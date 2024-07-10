nums = list(map(int, input().split()))
result = sum(num for num in nums) // 3 - 2 * len(nums)
print(result)