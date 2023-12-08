def mean_absolute_deviation(numbers: List[float]) -> float:
    numbers = sorted(numbers)
    mean = sum(numbers) / len(numbers)
    return sum([abs(x - mean) for x in numbers]) / len(numbers)