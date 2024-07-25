def rolling_max(numbers):
    max_values = []
    for i in range(len(numbers) - 1):
        max_values.append(max(numbers[i], numbers[i+1]))
    return max_values