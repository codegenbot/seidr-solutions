def below_zero(operations):
    count = 0
    for op in operations:
        if op < 0:
            count += 1
    return count

operations = list(map(int, input().split()))
result = below_zero(operations)
print(result)