values = list(map(int, input("Enter space-separated numbers: ").strip().split()))
result = sum(val * val for val in values)
print(result)