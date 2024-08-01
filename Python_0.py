def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


numbers_list = [5, 10, 15, 20]
threshold_value = 2
result = check_numbers(numbers_list, threshold_value)
print(result)