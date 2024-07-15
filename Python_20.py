numbers = list(map(float, input().strip().split()))
result = min(numbers, key=lambda x: abs(x - 0))
print(result)