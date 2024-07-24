def check_numbers_within_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i+1]) < threshold:
            return True
    return False

# Call the function with correct arguments
check_numbers_within_threshold([1, 5, 3, 9, 7], 2)