nums = list(map(int, input().split()))
result = sum([(num // 3) for num in nums])
print(result)