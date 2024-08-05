def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Corrected code
numbers = [4, 8, 2, 10, 15]
threshold = 3
result = check_numbers(numbers, threshold)
print(result)