def mean_absolute_deviation(numbers: List[float]) -> float:
    n = len(numbers)
    mean = sum(numbers) / n
    
    deviation = []
    for num in numbers:
        deviation.append(abs(num - mean))
    
    return sum(deviation) / n