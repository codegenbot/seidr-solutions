def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

numbers = list(map(int, input("Enter a list of numbers separated by spaces: ").split()))
print(normalize_numbers(numbers))