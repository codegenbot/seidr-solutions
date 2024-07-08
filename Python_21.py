from typing import List
import statistics

def rescale_to_unit(numbers: List[float]) -> List[float]:
    return [(x - statistics.fmin(numbers)) / (statistics.fmax(numbers) - statistics.fmin(numbers)) for x in numbers]