def mean_absolute_deviation(numbers: List[float]) -> float:
    average = sum(numbers) / len(numbers)
    return sum(abs(n - average) for n in numbers) / len(numbers)