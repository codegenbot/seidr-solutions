def rolling_max(numbers):
    return [max(numbers[i : i + 3]) for i in range(len(numbers) - 2)]

print(rolling_max([3, 2, 3, 100, 3]))  # Output: [3, 3, 100, 100]