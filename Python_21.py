def rescale_to_unit(numbers: List[float]) -> List[float]:
    max_val = max(numbers)
    min_val = min(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]