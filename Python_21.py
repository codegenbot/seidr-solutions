def rescale_to_unit(numbers: list) -> list:
    min_value = min(numbers)
    max_value = max(numbers)
    return [(number - min_value) / (max_value - min_value) for number in numbers]