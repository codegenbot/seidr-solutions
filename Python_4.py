import statistics


def mean_absolute_deviation(numbers: list[float]) -> float:
    mean = statistics.mean(numbers)
    return statistics.mean([abs(num - mean) for num in numbers])