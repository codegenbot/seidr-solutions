def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return 0
    
    deviations = [abs(num - statistics.mean(numbers)) for num in numbers]
    return sum(deviations) / len(deviations)