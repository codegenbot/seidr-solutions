def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) >= threshold:
            return False
    return True

numbers = [3, 6, 9, 12, 15]  # Example input
threshold = 4  # Example threshold value
result = check_numbers(numbers, threshold)
print(result)