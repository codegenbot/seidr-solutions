def rescale_to_unit(numbers: List[float]) -> List[float]:
    minimum = min(numbers)
    maximum = max(numbers)
    
    return [(x - minimum) / (maximum - minimum) for x in numbers]