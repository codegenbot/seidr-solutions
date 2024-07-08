def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

has_close_elements = check_numbers([3, 6, 9, 12], 4)
print(has_close_elements)