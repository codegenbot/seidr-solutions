def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

# Test input
test_input = [5, 10, 15, 20, 25]
output = normalize_numbers(test_input)
print(output)