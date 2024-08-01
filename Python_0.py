def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Sample function call to check_numbers
numbers = [1, 5, 8, 10]
threshold = 3
print(check_numbers(numbers, threshold))