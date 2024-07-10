values = list(map(int, input("Enter space-separated integers: ").split()))
result = sum(val * val for val in values)
print(result)