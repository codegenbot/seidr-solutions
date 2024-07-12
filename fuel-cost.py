data = list(map(int, input().split()))

result = sum((x // 3 - 2) for x in data)
print(result)