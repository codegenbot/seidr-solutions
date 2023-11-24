nums = [int(num) for num in input().split()]

result = sum([num//3 - 2 for num in nums])
print(result)