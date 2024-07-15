def normalize_numbers(numbers):
    if any(num <= 0 for num in numbers) or not any(num > 0 for num in numbers):
        return [0]
    min_num = min(numbers)
    if min_num == 0:
        return [0]
    return [num // min_num for num in numbers if num % min_num == 0]