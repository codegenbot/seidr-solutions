from typing import List, Tuple


def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(sorted(set(numbers)))[1:-1][0], tuple(sorted(set(numbers)))[1:-1][-1]