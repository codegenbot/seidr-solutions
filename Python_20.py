```
from typing import List, Tuple
import math


def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    min_distance = float("inf")
    closest_pair = ()

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            distance = abs(numbers[i] - numbers[j])
            if distance < min_distance:
                min_distance = distance
                closest_pair = (numbers[i], numbers[j])

    return tuple(sorted(closest_pair))