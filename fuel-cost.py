numbers = list(map(int, input().split()))
result = sum([max(0, num // 3 - 2) for num in numbers])
print(result)