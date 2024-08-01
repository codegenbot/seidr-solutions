def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

has_close_elements = [5, 8, 3, 1, 9]
threshold = 2
print(check_numbers(has_close_elements, threshold))