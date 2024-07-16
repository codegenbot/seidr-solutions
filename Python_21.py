from typing import List
import math


def rescale_to_unit(numbers: List[float]) -> List[float]:
    return [
        round((x - min(numbers)) / (max(numbers) - min(numbers)), 6) for x in numbers
    ]