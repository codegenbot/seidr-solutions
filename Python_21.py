def check(func):
    numbers = [2, 5, 8, 11, 14]
    return func(numbers) 

def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

check(normalize_numbers)