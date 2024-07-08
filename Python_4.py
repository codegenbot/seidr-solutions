def mean_absolute_deviation(numbers): -> float:
    if len(numbers) == 0:
        return None
    import statistics
    sum = 0
    count = 0
    mean_val = statistics.mean(numbers)
    for num in numbers:
        sum += abs(num - mean_val)
        count += 1
    return sum / count