numbers.sort()
min_diff = min(abs(numbers[i] - numbers[i + 1]) for i in range(len(numbers) - 1)
result = [(numbers[i], numbers[i + 1]) for i in range(len(numbers) - 1) if abs(numbers[i] - numbers[i + 1]) == min_diff][0]
return result