from typing import List
import numpy as np


def rescale_to_unit(numbers: List[float]) -> List[float]:
    return list(
        np.interp(
            np.arange(len(numbers)),
            [min(numbers), *numbers, max(numbers)],
            [0, *(np.array(numbers) - min(numbers)) / (max(numbers) - min(numbers)), 1],
        )
    )