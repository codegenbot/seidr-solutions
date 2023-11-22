def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]


result = rescale_to_unit([1, 2, 3, 4, 5])
print(result)