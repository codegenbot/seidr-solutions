numbers = list(map(int, input().split()))
result = sum([(num - 2) // 3 for num in numbers])
print(result)