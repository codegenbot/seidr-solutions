def check(normalize_numbers):
    min_num = min(normalize_numbers)
    max_num = max(normalize_numbers)
    return [(x - min_num) / (max_num - min_num) for x in normalize_numbers]