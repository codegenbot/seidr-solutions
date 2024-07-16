from typing import List, Tuple
import math


def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    min_diff = math.inf
    closest_pair = (numbers[0], numbers[1])

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[j] - numbers[i])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return tuple(sorted(closest_pair))