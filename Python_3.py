operations = list(map(int, input().split()))
def below_zero(operations):
    return sum(num < 0 for num in operations)

print(below_zero(operations))