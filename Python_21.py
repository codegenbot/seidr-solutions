from typing import List
import numpy as np


def rescale_to_unit(numbers: List[float]) -> List[float]:
    return [num / max(numbers) for num in numbers].tolist()