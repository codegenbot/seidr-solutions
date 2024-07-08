def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Example usage
numbers = [3, 1, 5, 7, 2]
threshold = 1
result = check_numbers(numbers, threshold)
print(result)