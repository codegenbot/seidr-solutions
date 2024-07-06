def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [(x - mean) for x in numbers]
    return sum(abs(x) for x in deviation) / len(deviation)