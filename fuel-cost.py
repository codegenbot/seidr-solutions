nums = [int(num) for num in input().split()]
result = sum([max(0, num // 3 - 2) for num in nums])
print(result)