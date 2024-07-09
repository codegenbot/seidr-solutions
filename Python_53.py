import sys

def add(numbers):
    return sum(numbers)

numbers = [int(num) for num in sys.stdin.readline().strip().split()]
result = add(numbers)
print(result)