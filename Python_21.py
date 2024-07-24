def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

# Read the input numbers
numbers = list(map(int, input().split()))

# Call the function and print the result
result = normalize_numbers(numbers)
print(result)