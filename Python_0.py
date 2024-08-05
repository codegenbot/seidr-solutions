def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


# Call the function with appropriate arguments
numbers = [2, 5, 8, 10]
threshold = 3
result = check_numbers(numbers, threshold)
print(result)