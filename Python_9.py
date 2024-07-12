def rolling_max(numbers):
    result = []
    window_size = 3
    for i in range(len(numbers) - window_size + 1):
        result.append(max(numbers[i:i+window_size]))
    return result

print(rolling_max([3, 2, 3, 100, 3]))  # Output will be [3, 3, 3, 100, 100]