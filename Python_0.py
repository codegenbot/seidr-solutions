def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Call the function with actual arguments
result = check_numbers([3, 6, 9, 12], 3)
print(result)