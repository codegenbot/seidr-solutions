def below_zero(operations):
    count = 0
    for num in operations:
        if num < 0:
            count += 1
    return count

operations = list(map(int, input().strip().split()))
result = below_zero(operations)
print(result)