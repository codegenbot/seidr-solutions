def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

has_close_elements = [3, 6, 9, 12, 15]
threshold_value = 3
print(check_threshold(has_close_elements, threshold_value))