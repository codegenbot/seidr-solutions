def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_number = min(numbers)
    max_number = max(numbers)
    scaled_numbers = [(number - min_number) / (max_number - min_number) for number in numbers]
    return scaled_numbers