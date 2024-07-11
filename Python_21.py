from statistics import fmin, fmax


def rescale_to_unit(numbers: List[float]) -> List[float]:
    return [(num - fmin(numbers)) / (fmax(numbers) - fmin(numbers)) for num in numbers]