def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not all(isinstance(x, (int, float)) for x in numbers):
        return "Invalid input. Please provide valid floating point or integer values."
    elif len(numbers) == 0:
        return []
    else:
        min_val = min(numbers)
        max_val = max(numbers)
        return [(x - min_val) / (max_val - min_val) for x in numbers]