def mean_absolute_deviation(numbers: List[float]) -> float:
    try:
        mean = stat_mean(numbers)
        return sum(abs(num - mean) for num in numbers) / len(numbers)
    except Exception as e:
        return f"Error calculating Mean Absolute Deviation: {str(e)}"