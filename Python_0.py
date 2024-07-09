def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

numbers = [5, 7, 2, 1, 9]
threshold = 2
result = check_numbers(numbers, threshold)
print(result)