def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    rescaled = [(num - min_num) / (max_num - min_num) for num in numbers]
    return rescaled