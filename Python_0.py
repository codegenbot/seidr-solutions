def check_numbers(numbers, threshold):
    numbers.sort()
    return any(
        abs(numbers[i] - numbers[i + 1]) < threshold for i in range(len(numbers) - 1)
    )

# Correct usage:
numbers = [4, 2, 1, 3]
threshold = 2
result = check_numbers(numbers, threshold)
print(result)