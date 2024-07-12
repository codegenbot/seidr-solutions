min_num = min(numbers)
max_num = max(numbers)
return [(num - min_num) / (max_num - min_num) for num in numbers]