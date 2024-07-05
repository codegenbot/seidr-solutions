def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_value = min(numbers)
    max_value = max(numbers)
    return [(x - min_value) / (max_value - min_value) for x in numbers]