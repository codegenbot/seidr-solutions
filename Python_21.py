def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]


# Call the function with appropriate input
input_numbers = [5, 10, 15, 20]
output = normalize_numbers(input_numbers)
print(output)