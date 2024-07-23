def mean_absolute_deviation(numbers: List[float]) -> float:
    indented_mean = sum(numbers) / len(numbers)
    return sum(abs(num - indented_mean) for num in numbers) / len(numbers)