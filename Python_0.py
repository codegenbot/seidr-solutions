def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

n = int(input().strip())
numbers = list(map(int, input().strip().split()))
threshold = int(input().strip())
print(check_threshold(numbers, threshold))