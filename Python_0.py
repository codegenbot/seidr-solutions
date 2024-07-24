def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


# Call the function
result = check_numbers([3, 6, 1, 9, 5], 2)
print(result)