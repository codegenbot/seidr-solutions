data = list(map(int, input().split()))
result = sum((num // 3 - 2) for num in data)
print(result)