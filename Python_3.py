import sys
operations = list(map(int, sys.stdin.readline().strip().split(',')))

def below_zero(operations):
    return sum(1 for num in operations if num < 0)

result = below_zero(operations)
print(result)