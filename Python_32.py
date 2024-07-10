values = list(map(int, input().strip().split()))
result = sum(val**2 for val in values)
print(result)