```
from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    from statistics import mean as stat_mean
    from statistics import stdev as stat_stdev
    
    mean = stat_mean(numbers)
    return stat_stdev(numbers)