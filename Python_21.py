def rescale_to_unit(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

# Input
numbers = [5, 10, 15, 20, 25]

# Output
print(rescale_to_unit(numbers))