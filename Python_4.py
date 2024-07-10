def mean_absolute_deviation(numbers: List[float]) -> float:
    if len(numbers) == 0:
        return 0

    mean = sum(numbers) / len(numbers)
    
    median_deviation = sum(abs(n - mean) for n in numbers) / len(numbers)
    return median_deviation