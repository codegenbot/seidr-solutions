import statistics


def mean_absolute_deviation(numbers):
    return statistics.mean(abs(n - statistics.mean(numbers)) for n in numbers)