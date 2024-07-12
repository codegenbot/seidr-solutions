def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Example of calling the function with correct arguments:
numbers = [3, 6, 9, 12]
threshold = 4
result = check_threshold(numbers, threshold)
print(result)