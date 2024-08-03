```
def rescale_to_unit(numbers: list[float]) -> list[float]:
    return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]