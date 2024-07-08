from statistics import mean as statistics_mean


def mean_absolute_deviation(numbers: list[float]) -> float:
    if len(numbers) == 0:
        return None
    total = 0
    count = 0
    mean_val = mean(numbers)
    for num in numbers:
        total += abs(num - mean_val)
        count += 1
    return total / count