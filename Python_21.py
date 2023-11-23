def rescale_to_unit(numbers: List[float]) -> List[float]:
    max_num = max(numbers)
    min_num = min(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]