nums = list(map(int, input().split()))
result = sum([(num // 3 - 2) for num in nums]) + len(nums) * 2
print(result)