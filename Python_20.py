numbers = list(map(float, input().split()))
result = min(numbers, key=lambda x: abs(x - 0))
print(result)