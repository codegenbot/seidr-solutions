nums = list(map(float, input().split()))
result = sum([int(num/3) - 2 for num in nums])
print(result)