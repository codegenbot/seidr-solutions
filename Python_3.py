def below_zero(operations):
    count = 0
    for num in operations:
        if num < 0:
            count += 1
    return count

operations = []
while True:
    try:
        num = int(input())
        operations.append(num)
    except EOFError:
        break

result = below_zero(operations)
print(result)