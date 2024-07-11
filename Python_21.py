def rescale_to_unit(numbers: List[float]) -> List[float]:
    return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]