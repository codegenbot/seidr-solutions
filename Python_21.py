def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

# User Input
numbers = [int(num) for num in input("Enter numbers separated by space: ").split()]

# Output
print(normalize_numbers(numbers))