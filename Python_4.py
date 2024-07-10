def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [(x - mean) ** 2 for x in numbers]
    return sum(deviation) ** 0.5