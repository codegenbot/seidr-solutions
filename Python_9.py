def rolling_max(numbers):
    result = []
    window_size = 1
    for i in range(len(numbers) - window_size + 1):
        result.append(max(numbers[i : i + window_size]))
    return result