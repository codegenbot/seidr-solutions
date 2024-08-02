def check_adjacent_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


# Corrected function call
numbers = [1, 3, 5, 7]
threshold = 2
print(check_adjacent_numbers(numbers, threshold))