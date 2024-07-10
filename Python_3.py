def below_zero(operations):
    return sum(1 for num in operations if num < 0)

operations = []
while True:
    try:
        operations.append(int(input()))
    except EOFError:
        break

result = below_zero(operations)
print(result)