operations = []

while True:
    try:
        operation = float(input().strip())
        if not operation:
            break
        operations.append(operation)
    except ValueError:
        break

result = any(num < 0 for num in operations)

print(result)