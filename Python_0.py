def check_numbers_within_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i+1]) < threshold:
            return True
    return False

numbers = [1, 5, 8, 11]
threshold = 4
print(check_numbers_within_threshold(numbers, threshold))