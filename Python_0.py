def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Define numbers list and threshold
numbers = [3, 7, 2, 10, 5]
threshold = 2

# Call the function check_numbers
result = check_numbers(numbers, threshold)
print(result)