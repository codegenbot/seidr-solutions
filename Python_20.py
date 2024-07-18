import sys

def find_min_difference(numbers):
    return max(numbers) - min(numbers)

try:
    input_numbers = [int(x) for x in input().split()]
    output = find_min_difference(input_numbers)
    print(output)
except EOFError:
    pass