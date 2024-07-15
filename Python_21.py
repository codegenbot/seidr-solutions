def normalize(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

# Call the function with required input
input_numbers = [3, 9, 12, 6, 2]
output = normalize(input_numbers)
print(output)