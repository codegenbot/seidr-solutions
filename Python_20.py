numbers = list(map(float, input().split()))
closest = min(numbers, key=lambda x: abs(x - 0))
print(closest)