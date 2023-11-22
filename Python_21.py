def rescale_to_unit(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]


numbers = list(map(float, input().split()))
result = rescale_to_unit(numbers)
print(result)