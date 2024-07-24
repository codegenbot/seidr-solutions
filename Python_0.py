def check_numbers_within_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i+1]) < threshold:
            return True
    return False

numbers = [3, 6, 9, 1, 2]
threshold = 2
result = check_numbers_within_threshold(numbers, threshold)
print(result)