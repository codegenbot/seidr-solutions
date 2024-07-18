import sys

def find_min_difference(numbers):
    return max(numbers) - min(numbers)

for line in sys.stdin:
    input_numbers = [int(x) for x in line.split()]
    output = find_min_difference(input_numbers)
    print(output)