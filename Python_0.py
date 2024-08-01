def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

has_close_elements = [3, 7, 1, 9, 2]
threshold = 2
result = check_numbers(has_close_elements, threshold)
print(result)