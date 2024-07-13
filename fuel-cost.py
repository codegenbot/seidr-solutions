values = list(map(int, input().split()))
result = sum([max(0, val // 3 - 2) for val in values])
print(result)