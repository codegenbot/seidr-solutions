def normalize_numbers(numbers):
    min_num, max_num = min(numbers), max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]