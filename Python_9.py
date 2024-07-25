def rolling_max(numbers):
    max_values = []
    for i in range(len(numbers)):
        max_values.append(max(numbers[i], numbers[i + 1])) if i + 1 < len(numbers) else max_values.append(numbers[i])
    return max_values