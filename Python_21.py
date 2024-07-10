```
def rescale_to_unit(numbers: List[float]) -> List[float]:
    return [(num - min(numbers)) / (max(numbers) - min(numbers)) for num in numbers]