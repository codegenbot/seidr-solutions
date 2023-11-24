nums = [int(x) for x in input().split()]
result = sum([num//3 - 2 for num in nums])
print(result)