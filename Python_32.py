values = list(map(int, raw_input().strip().split()))
result = sum(val * val for val in values)
print(result)