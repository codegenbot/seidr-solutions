numbers.sort()
min_diff = float("inf")
closest_pair = (0.0, 0.0)

for i in range(len(numbers) - 1):
    diff = numbers[i + 1] - numbers[i]
    if diff < min_diff:
        min_diff = diff
        closest_pair = (numbers[i], numbers[i + 1])

closest_pair