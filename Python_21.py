def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

user_input = input().split()
numbers = [int(num) for num in user_input]
result = normalize_numbers(numbers)
print(result)