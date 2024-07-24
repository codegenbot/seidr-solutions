def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]


# Ask user for input
numbers = list(map(int, input("Enter a list of numbers separated by spaces: ").split()))

# Call the function and print the result
print(normalize_numbers(numbers))