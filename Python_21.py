numbers_min = min(numbers)
numbers_max = max(numbers)
scaled_numbers = [(num - numbers_min) / (numbers_max - numbers_min) for num in numbers]
return scaled_numbers