def check_adjacent_numbers(numbers, threshold):
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

numbers = [3, 6, 9, 12, 15]
threshold = 4
result = check_adjacent_numbers(numbers, threshold)
print(result)