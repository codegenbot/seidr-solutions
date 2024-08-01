numbers = [5, 8, 15, 3, 12]
threshold = 2


def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


has_close_elements = check_numbers(numbers, threshold)