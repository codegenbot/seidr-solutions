def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


# Call the function with the required arguments to execute the code
result = check_threshold([3, 6, 9, 15, 18], 3)
print(result)