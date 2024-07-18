def has_close_elements(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


input_numbers = [5, 10, 2, 8]
input_threshold = 3
result = has_close_elements(input_numbers, input_threshold)
print(result)