```
def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        raise ValueError("Input list is empty")

    for num in numbers:
        if not isinstance(num, (int, float)):
            raise ValueError("Input list must contain only numbers")
    
    try:
        min_val = min(numbers)
        max_val = max(numbers)
        return [(x - min_val) / (max_val - min_val) for x in numbers]
    except TypeError:
        raise ValueError("Input list must contain only numbers")