strings = input().strip().split()
result = max(strings, key=len)
print(result)