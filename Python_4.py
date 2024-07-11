```''
def mean_absolute_deviation(numbers:`python List[float]`):`python -> float`
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)
''