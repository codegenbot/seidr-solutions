def check_threshold(numbers, threshold):
    numbers.sort()
    return any(abs(numbers[i] - numbers[i + 1]) < threshold for i in range(len(numbers) - 1))