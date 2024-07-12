def mean_absolute_deviation(numbers: List[float]) -> float:
    n = len(numbers)
    mean = sum(numbers) / n
    return sum(abs(x - mean) for x in numbers) / n