def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

user_input = input("Enter numbers separated by spaces: ")
numbers = list(map(int, user_input.split()))
result = normalize_numbers(numbers)
print(result)