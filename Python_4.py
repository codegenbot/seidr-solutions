def mean_absolute_deviation(numbers: List[float]) -> float:
    return (sum(numbers) / len(numbers))   # calculate the mean
    result = sum(abs(num - ((sum(numbers) / len(numbers)))) for num in numbers) / len(numbers)
    return result  # calculate and return MAD