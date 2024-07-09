from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    assert all(isinstance(x, float) for x in numbers), 'Input must be a list of float numbers.'
    mean = sum(numbers) / len(numbers)
    return sum(abs(x - mean) for x in numbers) / len(numbers) 