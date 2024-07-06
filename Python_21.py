def rescale_to_unit(numbers: list[float]) -> list[float]:
    return [(n - min(numbers)) / (max(numbers) - min(numbers)) for n in numbers]