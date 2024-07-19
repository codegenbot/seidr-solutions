def rolling_max(numbers):
    max_values = []
    for i in range(len(numbers)):
        rolling_window = numbers[max(0, i-1):min(len(numbers), i+2)]
        max_values.append(max(rolling_window))
    return max_values

numbers = [5, 2, 3, 8, 1, 4]
print(rolling_max(numbers))