def normalize_numbers(numbers):
    norm = []
    total = sum(numbers)
    for num in numbers:
        norm.append(num / total)
    return norm