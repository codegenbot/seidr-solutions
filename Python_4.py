def mean_absolute_deviation(numbers: List[float]) -> float:
    avg = sum(numbers) / len(numbers)
    return sum(abs(x - avg) for x in numbers) / len(numbers)