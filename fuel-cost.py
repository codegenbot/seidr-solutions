n = int(input())
numbers = [int(input()) for _ in range(n)]
result = sum((num // 3 - 2) for num in numbers)
print(result)