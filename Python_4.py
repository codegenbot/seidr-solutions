def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation_sum = sum(abs(x - mean) for x in numbers)
    mad = deviation_sum / len(numbers)
    return mad