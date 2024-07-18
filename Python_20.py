numbers.sort()
min_diff = min(numbers[i] - numbers[i-1] for i in range(1, len(numbers)))
closest_pairs = [(numbers[i-1], numbers[i]) for i in range(1, len(numbers)) if (numbers[i] - numbers[i-1]) == min_diff][0]
return closest_pairs