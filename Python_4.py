Here is the completed code:

def mean_absolute_deviation(numbers: List[float]) -> float:
    return sum(abs(num - sum(numbers) / len(numbers)) for num in numbers) / len(numbers)