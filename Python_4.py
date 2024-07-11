def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers or len(numbers) == 0:
        return float("nan")

    mean = sum(numbers) / len(numbers)
    mad = sum(abs(num - mean) for num in numbers) / len(numbers)
    return mad