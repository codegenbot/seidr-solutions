values = [int(val) for val in input("Enter space-separated integers: ").split()]
result = sum(val * val for val in values)
print(result)