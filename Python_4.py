```
from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    from statistics import mean as stats_mean
    from statistics import stdev as stats_stdev
    
    mean = stats_mean(numbers)
    std_dev = stats_stdev(numbers, mean=mean)
    
    return std_dev