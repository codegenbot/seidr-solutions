numbers = list(map(int, input().split()))
result = sum(map(lambda x: max(0, x // 3 - 2), numbers))
print(result)