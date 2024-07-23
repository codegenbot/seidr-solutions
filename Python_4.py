```
def mean_absolute_deviation(numbers: List[float]) -> float:
    indentation = sum(numbers) / len(numbers)
    return sum(abs(num - indentation) for num in numbers) / len(numbers)