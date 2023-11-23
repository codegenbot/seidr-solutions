def mean_absolute_deviation(numbers: List[float]) -> float:
    # Calculate the mean of the numbers
    mean = sum(numbers) / len(numbers)

    # Calculate the sum of the absolute differences from the mean
    absolute_differences_sum = sum(abs(num - mean) for num in numbers)

    # Calculate the mean absolute deviation
    mad = absolute_differences_sum / len(numbers)

    return mad