def find_closest_pair(numbers):
    numbers.sort()
    min_diff = min(numbers[i + 1] - numbers[i] for i in range(len(numbers) - 1))
    closest_pairs = [
        (numbers[i], numbers[i + 1])
        for i in range(len(numbers) - 1)
        if numbers[i + 1] - numbers[i] == min_diff
    ]
    return closest_pairs

input_numbers = list(map(int, input().split()))
result = find_closest_pair(input_numbers)
print(result)