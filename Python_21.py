def normalize(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]

numbers = [float(x) for x in input().split()]
result = normalize(numbers)
print(result)