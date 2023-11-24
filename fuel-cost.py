nums = list(map(int, input().split()))
result = sum([max(0, num // 3 - 2) for num in nums])
print(result)