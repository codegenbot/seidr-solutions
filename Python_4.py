def mean_absolute_deviation(numbers: List[float]) -> float:
    mean_value = sum(numbers) / len(numbers)
    return sum(abs(x - mean_value) for x in numbers) / len(numbers)