def check_adjacent_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

numbers = [3, 8, 5, 11, 6]
threshold = 4
result = check_adjacent_numbers(numbers, threshold)
print(result)