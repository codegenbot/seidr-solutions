def mean_absolute_deviation(numbers: List[float]) -> float:
    mean_value = sum(numbers) / len(numbers)
    deviations = [abs(num - mean_value) for num in numbers]
    return sum(deviations) / len(deviations)