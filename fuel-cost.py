numbers = list(map(int, input().split()))
result = sum(map(lambda x: x // 3 - 2, numbers))
print(result)