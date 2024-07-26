nums = list(map(int, input().split()))
result = sum([max(num // 3 - 2, 0) for num in nums])
print(result)