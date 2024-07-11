def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

# Input from user
numbers = list(map(int, input().split()))

# Call the function with the input
result = normalize_numbers(numbers)
print(result)