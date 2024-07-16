def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

numbers = [int(x) for x in input("Enter numbers separated by space: ").split()]
print(normalize_numbers(numbers))