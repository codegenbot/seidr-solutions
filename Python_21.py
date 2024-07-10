```
def rescale_to_unit(numbers: List[float]) -> List[float]:
    return [(n - min(numbers)) / (max(numbers) - min(numbers)) for n in numbers]