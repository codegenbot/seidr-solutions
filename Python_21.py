Here is the completed code:

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_val = min(numbers)
    max_val = max(numbers)
    return [(val - min_val) / (max_val - min_val) for val in numbers]