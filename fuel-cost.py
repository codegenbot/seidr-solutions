nums = list(map(int, input().split()))
result = sum([num//3 - 1 for num in nums])
print(result)