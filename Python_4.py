def mean_absolute_deviation(numbers: List[float]) -> float:
    return statistics.mean(
        [abs(num - mean) for num in numbers for mean in [statistics.mean(numbers)]]
    )