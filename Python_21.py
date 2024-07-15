def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

# Test the function
numbers = [5, 10, 15, 20]
print(normalize_numbers(numbers))