import sys

def has_close_values(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

numbers = list(map(int, sys.argv[1].split(',')))
threshold = int(sys.argv[2])

print(has_close_values(numbers, threshold))