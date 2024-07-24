def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


# Call the function with appropriate input
numbers = [5, 10, 15, 20]
threshold = 5
result = check_numbers(numbers, threshold)
print(result)