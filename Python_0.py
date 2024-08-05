def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

numbers = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3]
threshold = 2
result = check_numbers(numbers, threshold)
print(result)