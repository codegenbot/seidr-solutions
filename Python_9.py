def rolling_max(numbers):
    max_values = []
    for i in range(1, len(numbers) - 1):
        max_values.append(max(numbers[i - 1], numbers[i], numbers[i + 1]))
    
    return [numbers[0]] + max_values + [numbers[-1]]