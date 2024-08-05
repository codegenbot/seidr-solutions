def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Call the function with appropriate arguments
numbers = [3, 7, 9, 15, 21]
threshold = 4
result = check_numbers(numbers, threshold)