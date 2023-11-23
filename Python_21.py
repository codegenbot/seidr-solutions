def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    scaled_nums = [(num - min_num) / (max_num - min_num) for num in numbers]
    return scaled_nums