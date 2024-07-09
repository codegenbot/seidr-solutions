min_number = min(numbers)
max_number = max(numbers)
transformed_numbers = [(x - min_number) / (max_number - min_number) for x in numbers]
return transformed_numbers