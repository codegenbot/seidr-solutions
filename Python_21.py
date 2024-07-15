def normalize_numbers(numbers):
    max_num = max(numbers)
    normalized = [num / max_num for num in numbers]
    return normalized