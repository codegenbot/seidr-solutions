import sys

numbers = list(map(int, sys.stdin.readline().strip().split()))
threshold = numbers.pop()

def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) >= threshold:
            return False
    return True

result = check_numbers(numbers, threshold)
print(result)