values = []
for _ in range(3):
    values.append(int(input()))
result = sum(val * val for val in values)
print(result)