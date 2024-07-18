def check_threshold(numbers, threshold):
    numbers.sort()
    return any(
        abs(numbers[i] - numbers[i + 1]) < threshold for i in range(len(numbers) - 1)
    )


numbers = [1, 2, 5, 7]
threshold = 3
result = check_threshold(numbers, threshold)
print(result)