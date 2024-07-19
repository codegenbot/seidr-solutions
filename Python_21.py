def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

# Call the function with the required numbers input
numbers = [5, 10, 15, 20]
print(normalize_numbers(numbers))