def check_numbers_within_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i+1]) < threshold:
            return True
    return False

# Example usage:
numbers = [3, 8, 12, 5]
threshold = 3
result = check_numbers_within_threshold(numbers, threshold)
print(result)