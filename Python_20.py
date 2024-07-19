numbers.sort()
closest_diff = min(numbers[i + 1] - numbers[i] for i in range(len(numbers) - 1))
closest_elements = [
    (numbers[i], numbers[i + 1])
    for i in range(len(numbers) - 1)
    if numbers[i + 1] - numbers[i] == closest_diff
]
return closest_elements[0]