import statistics


def mean_absolute_deviation(numbers: List[float]) -> float:
    mean_val = statistics.mean(numbers)
    return statistics.mean([abs(num - mean_val) for num in numbers])