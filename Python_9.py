def rolling_max(numbers):
    max_numbers = []
    for i in range(len(numbers)):
        max_numbers.append(max(numbers[: i + 1]))
    return max_numbers