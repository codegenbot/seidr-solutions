def rolling_max(numbers):
    result = []
    for i in range(len(numbers)):
        current_max = max(numbers[i:i+3] if len(numbers[i:i+3]) == 3 else numbers[i:])
        result.append(current_max)
    return result