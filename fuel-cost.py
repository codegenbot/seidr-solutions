numbers = list(map(int, input().split()))
result = sum([num // 3 - 2 for num in numbers])
print(result)