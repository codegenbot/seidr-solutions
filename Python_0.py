import sys

def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

numbers = [int(x) for x in sys.stdin.readline().split()]
threshold = int(sys.stdin.readline())

result = check_numbers(numbers, threshold)
print(result)