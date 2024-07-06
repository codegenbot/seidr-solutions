def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) < 2:
        return 0.0

    mean = stat_mean(numbers)
    deviations = [abs(num - mean) for num in numbers]
    return stat_mean(deviations)