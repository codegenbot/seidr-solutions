def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Input values
numbers = [3, 5, 9, 12, 17]
threshold = 2
result = check_numbers(numbers, threshold)
print(result)