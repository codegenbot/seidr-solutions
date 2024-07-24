from typing import List, Tuple


def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(
        sorted(
            (x for x in numbers),
            key=lambda y: (min(map(lambda z: abs(z - y), numbers)), y),
        )
    )[1:-1]