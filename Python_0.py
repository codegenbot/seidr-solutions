def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

numbers = [3, 5, 7, 2, 8]
threshold = 2
result = check_threshold(numbers, threshold)
print(result)