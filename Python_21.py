def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

# Call the function with input numbers
numbers = [1, 5, 10, 20]
result = normalize_numbers(numbers)
print(result)