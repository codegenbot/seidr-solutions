import sys
def add(numbers):
    return sum(numbers)

numbers = [int(num) for num in sys.stdin.readline().split()]
result = add(numbers)
print(result)