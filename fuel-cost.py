nums = list(map(int, input().split()))
result = sum((num // 3 - 2) * num for num in nums)
print(result)