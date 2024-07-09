def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

# Input
numbers = list(map(int, input().split()))

# Output
print(normalize_numbers(numbers))