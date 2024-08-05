def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

# Read input from user
numbers = list(map(float, input().split()))

# Call the function
result = normalize_numbers(numbers)
print(result)