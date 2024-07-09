def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [(num - mean) ** 2 for num in numbers]
    return sum(deviation) / len(deviation) ** 0.5