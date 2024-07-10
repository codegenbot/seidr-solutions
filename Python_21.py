def calculate_normalized_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

input_numbers = [1, 2, 3, 4, 5]  # Example list of numbers
result = calculate_normalized_numbers(input_numbers)
result