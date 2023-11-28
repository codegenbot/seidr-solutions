def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviations = [abs(x - mean) for x in numbers]
    return sum(deviations) / len(deviations)