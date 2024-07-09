`def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    total_diff = sum(abs(num - mean) for num in numbers)
    return total_diff / len(numbers)`