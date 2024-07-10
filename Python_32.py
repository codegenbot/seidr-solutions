values = list(map(int, input().split()))
result = 0
for val in values:
    result += val * val
print(result)