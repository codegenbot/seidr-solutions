def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]


user_input = input("Enter numbers separated by spaces: ")
numbers = list(map(float, user_input.split()))

result = normalize_numbers(numbers)
print(result)