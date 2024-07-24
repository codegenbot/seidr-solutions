import statistics


def mean_absolute_deviation(numbers: list) -> float:
    deviations = [abs(num - statistics.mean(numbers)) for num in numbers]
    return statistics.mean(deviations)