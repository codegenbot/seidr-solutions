n = int(input())
result = sum((num // 3 - 2) for num in range(n))
print(result)