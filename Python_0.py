def check_adjacent_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

input_numbers = [5, 10, 15, 20]
threshold_value = 3
result = check_adjacent_numbers(input_numbers, threshold_value)
print(result)