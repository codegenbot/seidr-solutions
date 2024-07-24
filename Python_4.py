import statistics


def mean_absolute_deviation(numbers: list[float]) -> float:
    mean_value = statistics.mean(numbers)
    return statistics.mean([abs(num - mean_value) for num in numbers])