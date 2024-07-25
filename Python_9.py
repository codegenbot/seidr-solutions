def rolling_max(numbers):
    if len(numbers) < 3:
        return numbers

    max_values = [max(numbers[i - 1], numbers[i], numbers[i + 1]) for i in range(1, len(numbers) - 1)]

    max_values.insert(0, max(numbers[0], numbers[1]))
    max_values.append(max(numbers[-2], numbers[-1]))

    return max_values

rolling_max([3, 2, 3, 100, 3])