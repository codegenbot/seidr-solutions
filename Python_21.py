def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

numbers = input("Enter a list of numbers separated by spaces: ").split()
numbers = list(map(float, numbers))
result = normalize_numbers(numbers)
print(result)