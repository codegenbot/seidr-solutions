import sys

numbers = list(map(int, sys.argv[1].split()))
threshold = int(sys.argv[2])


def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


result = check_threshold(numbers, threshold)

print(result)