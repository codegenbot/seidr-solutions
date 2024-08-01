def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]


# Input
numbers = [5, 10, 15, 20, 25]

# Output
print(normalize_numbers(numbers))