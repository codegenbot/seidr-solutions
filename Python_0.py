def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Input
numbers = [1, 3, 5, 7]
threshold = 2
# Function call
result = check_numbers(numbers, threshold)
print(result)