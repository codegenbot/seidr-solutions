numbers = list(map(lambda x: int(x), input().split()))
result = sum([(num // 3) - 2 for num in numbers])
print(result)