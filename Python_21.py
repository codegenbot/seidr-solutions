def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not isinstance(numbers, list):
        raise ValueError("Input must be a list")
    for num in numbers:
        if not isinstance(num, float):
            raise ValueError("List elements must be floats")
    if len(set(numbers)) == 1:
        return [1 for _ in numbers]
    
    if not numbers:
        return []
    
    min_val = min(numbers)
    max_val = max(numbers)
    
    if max_val - min_val == 0:
        return [0 for _ in numbers]
        
    return [(x - min_val) / (max_val - min_val) for x in numbers]