def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    abs_diff = [abs(x - mean) for x in numbers]
    return sum(abs_diff) / len(abs_diff)