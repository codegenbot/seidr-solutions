from typing import List, Tuple


def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return min((x, y) for x in numbers for y in numbers if x < y), min(
        (x, y)
        for x in numbers
        for y in numbers
        if x < y
        and abs(x - y) == min(abs(z - w) for z in numbers for w in numbers if z < w)
    )