def rolling_max(numbers):
    return [max(numbers[max(0, i - 1):min(i + 2, len(numbers))] for i in range(len(numbers))]