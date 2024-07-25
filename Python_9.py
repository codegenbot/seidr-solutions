def rolling_max(numbers):
    max_values = []
    for i in range(1, len(numbers)-1):
        max_values.append(max(numbers[i - 1], numbers[i], numbers[i + 1]))
    
    max_values.insert(0, max(numbers[0], numbers[1]))
    max_values.append(max(numbers[-2], numbers[-1]))

    return max_values