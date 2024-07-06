def mean_absolute_deviation(numbers: List[float]) -> float:
    numbers.sort()
    median = sum(numbers) / len(numbers)
    return sum(abs(num - median) for num in numbers) / len(numbers)