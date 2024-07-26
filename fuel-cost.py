n = int(input())
result = sum((x // 3 - 2) for x in range(n))
print(result)