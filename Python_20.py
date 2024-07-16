from typing import List, Tuple
import math


def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(
        sorted(
            (a, b)
            for a, b in (
                (numbers[i], numbers[j])
                for i in range(len(numbers))
                for j in range(i + 1, len(numbers))
            )
        )[0]
    )