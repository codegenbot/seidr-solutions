numbers = list(map(float, input("Enter numbers separated by spaces: ").strip().split()))
result = min(numbers, key=lambda x: abs(x - 0))
print(result)