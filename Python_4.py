def mean_absolute_deviation(numbers: List[float]) -> float:
    numbers_mean = sum(numbers) / len(numbers)
    deviations = [abs(num - numbers_mean) for num in numbers]
    return sum(deviations) / len(deviations)