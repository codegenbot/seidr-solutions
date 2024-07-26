n = int(input())
values = [int(input()) for _ in range(n)]
result = sum((value // 3 - 2) for value in values)
print(result)