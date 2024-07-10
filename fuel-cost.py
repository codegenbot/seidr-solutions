nums = list(map(int, input().split()))
result = sum(map(lambda x: x // 3 - 2, nums))
print(result)