def rolling_max(numbers):
    if len(numbers) < 3:
        return numbers

    max_values = [max(numbers[i-1], numbers[i], numbers[i+1]) for i in range(1, len(numbers)-1)]

    return [numbers[0]] + max_values + [numbers[-1]]

print(rolling_max([3, 2, 3, 100, 3]))