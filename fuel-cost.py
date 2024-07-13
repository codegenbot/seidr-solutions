nums = list(map(int, input().split()))
result = sum(x // 3 - 2 for x in nums)
print(result)