def mean_absolute_deviation(numbers: list[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = [abs(x - mean) for x in numbers]
    return sum(deviation) / len(deviation)