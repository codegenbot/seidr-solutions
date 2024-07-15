def normalize(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

# Call the function with required input
numbers = [4, 7, 10, 3, 8]
result = normalize(numbers)
print(result)