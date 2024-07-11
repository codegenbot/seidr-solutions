```
xs = list(map(int, input("Enter your numbers separated by spaces: ").split()))
result = find_zero(xs)
print(result if result is not None else "Invalid input")