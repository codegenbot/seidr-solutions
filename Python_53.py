import sys


def add(numbers):
    return sum(numbers)


numbers = [int(num) for num in sys.argv[1:]]
result = add(numbers)
print(result)