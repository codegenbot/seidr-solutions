numbers.sort()
min_diff = min(numbers[i+1] - numbers[i] for i in range(len(numbers) - 1))
result = [(numbers[i], numbers[i+1]) for i in range(len(numbers) - 1) if numbers[i+1] - numbers[i] == min_diff][0]
return result