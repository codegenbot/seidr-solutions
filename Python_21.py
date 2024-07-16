def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num, max_num = min(numbers), max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]