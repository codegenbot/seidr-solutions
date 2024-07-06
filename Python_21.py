
def rescale_to_unit(numbers: List[float]) -> List[float]:
    smallest = min(numbers)
    largest = max(numbers)
    return [(x - smallest) / (largest - smallest) for x in numbers]