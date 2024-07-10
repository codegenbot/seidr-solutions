def mean_absolute_deviation(numbers: List[float]) -> float:
    total = sum(numbers)
    mean = total / len(numbers)
    mad = sum(abs(x - mean) for x in numbers) / len(numbers)
    return mad