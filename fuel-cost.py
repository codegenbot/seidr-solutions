nums = list(map(int, input().strip().split()))
result = sum([(num // 3 - 2) for num in nums])
print(result)