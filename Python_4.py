def mean_absolute_deviation(numbers: List[float]) -> float:
    average = sum(numbers) / len(numbers)
    return sum(abs(x - average) for x in numbers) / len(numbers)