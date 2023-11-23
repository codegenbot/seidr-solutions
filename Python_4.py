def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    absolute_deviations = [abs(x - mean) for x in numbers]
    return sum(absolute_deviations) / len(numbers)