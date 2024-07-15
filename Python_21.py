def normalize_numbers(numbers):
    return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]


numbers = list(map(int, input().split()))
result = normalize_numbers(numbers)
print(result)