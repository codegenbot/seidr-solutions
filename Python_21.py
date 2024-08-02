def calculate_normalized_values(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

numbers = [4, 10, 2, 8, 6]
result = calculate_normalized_values(numbers)
print(result)