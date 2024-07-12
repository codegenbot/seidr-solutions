Here is the completed code:

def mean_absolute_deviation(numbers: List[float]) -> float:
    avg = sum(numbers) / len(numbers)
    return sum(abs(n - avg) for n in numbers) / len(numbers)