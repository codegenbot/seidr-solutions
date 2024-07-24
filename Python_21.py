min_num = min(numbers)
max_num = max(numbers)
scaled = [(num - min_num) / (max_num - min_num) for num in numbers]
return scaled