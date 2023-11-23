operations = []
while True:
    try:
        operation = input().strip()
        if not operation:
            break
        operation = float(operation)
        operations.append(operation)
    except ValueError:
        break

if not operations:
    result = False
else:
    result = below_zero(operations)

print(result)