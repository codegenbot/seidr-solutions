import statistics


def mean_absolute_deviation(numbers):
    return statistics.mean(abs(x - statistics.mean(numbers)) for x in numbers)