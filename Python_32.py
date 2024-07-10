values = list(map(int, input().strip().split()))
result = sum(val * val for val in values)
print(result)