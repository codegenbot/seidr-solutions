def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

has_close_elements = [1, 5, 10, 15]
threshold = 3
result = check_numbers(has_close_elements, threshold)
print(result)