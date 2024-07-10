def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

has_close_elements = [5, 8, 12, 20, 25]  # Define the list of numbers
result = check_numbers(numbers=has_close_elements, threshold=10)  # Call the function with the list and threshold=10