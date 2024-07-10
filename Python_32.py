values = list(map(int, input("Enter values separated by spaces: ").strip().split()))
result = sum(val * val for val in values)
print(result)