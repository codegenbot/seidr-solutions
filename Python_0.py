def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Usage example
input_numbers = [5, 10, 2, 8]
input_threshold = 3
result = check_numbers(input_numbers, input_threshold)
print(result)