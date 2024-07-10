from typing import List


def mean_absolute_deviation(numbers: List[float]) -> float:
    from statistics import mean as stat_mean
    from statistics import stdev as stat_stdev

    m = stat_mean(numbers)
    s = stat_stdev(numbers, False)

    return s