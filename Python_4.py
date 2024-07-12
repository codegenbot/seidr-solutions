def mean_absolute_deviation(numbers: List[float]) -> float:
    return statistics.mean(
        [abs(num - statistics.mean(numbers)) for num in numbers for _ in [1]]
    )