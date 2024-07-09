Here is the completed code:

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(n - min_num) / (max_num - min_num) for n in numbers]