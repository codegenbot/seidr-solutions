def rolling_max(numbers):
    if len(numbers) < 3:
        return numbers

    max_values = [max(numbers[i:i+3]) for i in range(len(numbers) - 2)]

    return max_values

rolling_max([3, 2, 3, 100, 3])