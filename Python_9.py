def rolling_max(numbers):
    if len(numbers) < 3:
        return numbers

    return [
        max(numbers[i], numbers[i + 1], numbers[i + 2]) for i in range(len(numbers) - 2)
    ]

print(rolling_max([3, 2, 3, 100, 3]))  # Output: [3, 100, 100, 100]