operations = list(map(int, input().split()))
result = below_zero(operations)
print(result)

def below_zero(operations):
    return sum(1 for num in operations if num < 0)