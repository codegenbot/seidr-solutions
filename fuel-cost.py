nums = list(map(int, input().split()))
result = sum((num + 1) // 3 - 2 for num in nums)
print(result)