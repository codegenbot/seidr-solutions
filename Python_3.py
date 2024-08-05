def below_zero(operations):
    negative_count = sum(1 for num in operations if num < 0)
    return negative_count

operations = list(map(int, input().split()))
result = below_zero(operations)
print(result)