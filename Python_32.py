values = list(map(int, raw_input("Enter space-separated integers: ").split()))
result = sum(val * val for val in values)
print(result)