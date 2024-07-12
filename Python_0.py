def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Call the function with appropriate arguments
result = check_threshold([4, 7, 1, 3, 9], 2)