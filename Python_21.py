def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]


# Call the function with input
numbers = [2, 4, 6, 8]
result = normalize_numbers(numbers)
print(result)