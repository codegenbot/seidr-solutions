def normalize_numbers(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

numbers = [int(num) for num in input().split()]
result = normalize_numbers(numbers)
print(result)