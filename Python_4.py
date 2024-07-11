def mean_absolute_deviation(numbers: List[float]) -> float:
    x_mean = sum(numbers) / len(numbers)
    return sum(abs(x - x_mean) for x in numbers) / len(numbers)