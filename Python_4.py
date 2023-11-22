def mean_absolute_deviation(numbers: List[float]) -> float:
    from typing import List
    mean = sum(numbers) / len(numbers)
    deviation = [abs(x - mean) for x in numbers]
    return sum(deviation) / len(deviation)