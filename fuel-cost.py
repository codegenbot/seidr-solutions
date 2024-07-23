nums = list(map(int, input().split()))
result = sum((num * (num // 3) - 2) for num in nums)
print(result)