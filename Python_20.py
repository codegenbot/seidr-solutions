from typing import List, Tuple


def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(
        sorted(set(numbers), key=lambda x: min(abs(x - y) for y in numbers))[:2]
    )