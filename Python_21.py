def rescale_to_unit(numbers):
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]


numbers = [1.0, 2.0, 3.0, 4.0, 5.0]
result = rescale_to_unit(numbers)
print(result)