numbers.sort()
closest_pair = min(
    (numbers[i], numbers[i + 1])
    for i in range(len(numbers) - 1), key=lambda x: x[1] - x[0]
)
return closest_pair