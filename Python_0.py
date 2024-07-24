def check_numbers_within_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i+1]) < threshold:
            return True
    return False

# Call the function with the correct arguments
result = check_numbers_within_threshold([1, 4, 7, 10, 13], 3)
print(result)