def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Call the function with required input parameters
input_numbers = [5, 8, 2, 10, 15]
input_threshold = 3
result = check_numbers(input_numbers, input_threshold)
print(result)