nums = list(map(int, input().split()))
result = sum([(num // 3 - 2) if num >= 6 else 0 for num in nums])
print(result)