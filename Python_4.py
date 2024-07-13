import statistics


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = statistics.mean(numbers)
    return statistics.mean([abs(num - mean) for num in numbers])