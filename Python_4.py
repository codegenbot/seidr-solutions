def mean_absolute_deviation(numbers: List[float]) -> float:
    average = sum(numbers) / len(numbers)
    deviation = [(abs(num - average)) for num in numbers]
    return sum(deviation) / len(deviation)