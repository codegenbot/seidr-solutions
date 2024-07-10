values = list(map(int, input("Enter space-separated numbers: ").split()))
result = sum(val * val for val in values)
print(result)