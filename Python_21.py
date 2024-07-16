numbers_min = min(numbers)
numbers_max = max(numbers)
rescaled_numbers = [(x - numbers_min) / (numbers_max - numbers_min) for x in numbers]
return rescaled_numbers