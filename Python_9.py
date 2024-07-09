def rolling_max(numbers):
    max_values = []
    for i in range(len(numbers) - 2):
        max_values.append(max(numbers[i : i + 3]))
    return max_values