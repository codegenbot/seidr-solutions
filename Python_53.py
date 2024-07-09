import sys

def add(numbers):
    return sum(numbers)

numbers = [int(num) for num in input().split()]
result = add(numbers)
print(result)