def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

# Call the function with the input data
input_numbers = [3, 7, 10, 15]
result = normalize_numbers(input_numbers)
print(result)