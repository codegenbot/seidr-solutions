def scale_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

# Input data
numbers = [3, 6, 9, 12, 15]
print(scale_numbers(numbers))