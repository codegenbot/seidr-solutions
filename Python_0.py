def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

has_close_elements = [12, 5, 20, 30, 8]  # Example list of numbers
result = check_numbers(numbers=has_close_elements, threshold=10)