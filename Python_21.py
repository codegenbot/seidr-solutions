"""
def rescale_to_unit(numbers: list[float]) -> list[float]:
    if not numbers:
        return []
    minimum = min(numbers)
    maximum = max(numbers)
    return [(x - minimum) / (maximum - minimum) for x in numbers]
"""