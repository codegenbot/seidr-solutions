```
import statistics

def mean_absolute_deviation(numbers: List[float]) -> float:
    return statistics.mean(abs(x - statistics.mean(numbers)) for x in numbers)