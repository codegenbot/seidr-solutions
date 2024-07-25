def rolling_max(numbers):
    max_values = []
    for i in range(len(numbers) - 2):
        max_values.append(max(numbers[i], numbers[i+1], numbers[i+2]))
    max_values.extend(numbers[-2:]) # include the last two elements as it is
    return max_values