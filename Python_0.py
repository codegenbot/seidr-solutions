def check_numbers_threshold(numbers, threshold):
    return any(abs(numbers[i] - numbers[i + 1]) < threshold for i in range(len(numbers) - 1))

result = check_numbers_threshold([1, 5, 10, 15, 20], 3)
print(result)