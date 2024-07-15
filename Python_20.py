numbers = list(map(float, input().split()))
result = min(numbers, key=lambda x: abs(x))
print(result)