numbers = list(map(int, input().split()))
result = sum([max(0, n // 3 - 2) for n in numbers])
print(result)