def mean_absolute_deviation(numbers: List[float]) -> float:
    if any(not isinstance(n, (int, float)) for n in numbers):
        return "Invalid input"
    mean = stat_mean(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)