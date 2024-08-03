def has_close_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


# Call the function with the required arguments to execute the code
numbers = [3, 6, 9, 2, 4]
threshold = 3
print(has_close_numbers(numbers, threshold))