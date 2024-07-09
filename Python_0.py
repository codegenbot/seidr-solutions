def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Example of using the function
numbers = [3, 7, 2, 10, 1]
threshold = 2
result = check_numbers(numbers, threshold)
print(result)