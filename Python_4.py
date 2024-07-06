```python
def mean_absolute_deviation(numbers: list[float]) -> float:
    mean = sum(numbers) / len(numbers)
    total_deviation = sum(abs(num - mean) for num in numbers)
    return total_deviation / len(numbers)