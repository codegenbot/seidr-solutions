```def mean_absolute_deviation(numbers: list[float]) -> float:
    mean = sum(numbers) / len(numbers)
    variance = sum((x - mean) ** 2 for x in numbers) / len(numbers)
    return (variance) ** 0.5