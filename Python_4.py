import statistics


def mean_absolute_deviation(numbers: list[float]) -> float:
    return statistics.mean([abs(num - statistics.median(numbers)) for num in numbers])