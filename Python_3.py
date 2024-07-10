operations = list(map(int, input().split(",")))

def below_zero(operations):
    count = 0
    for num in operations:
        if num < 0:
            count += 1
    return count

result = below_zero(operations)
print(result)