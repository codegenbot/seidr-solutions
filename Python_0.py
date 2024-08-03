def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Call the function with the required arguments
result = check_threshold([1, 3, 5, 8], 2)  # Example input
print(result)