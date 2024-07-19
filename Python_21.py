def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_value = min(numbers)
    max_value = max(numbers)
    return [(value - min_value) / (max_value - min_value) for value in numbers]