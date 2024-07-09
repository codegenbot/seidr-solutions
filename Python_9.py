def rolling_max(numbers):
    return [max(numbers[i : i + 3]) for i in range(len(numbers) - 2)]

numbers = [4, 3, 6, 2, 4, 5]
result = rolling_max(numbers)
print(result)