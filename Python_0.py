def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

input_data = list(map(int, input().split()))
threshold = input_data[-1]
numbers = input_data[:-1]
print(check_threshold(numbers, threshold))