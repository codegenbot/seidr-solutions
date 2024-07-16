from typing import List
import math


def rescale_to_unit(numbers: List[float]) -> List[float]:
    return [i / max(numbers) for i in numbers]