from typing import List, Tuple


def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    min_diff = float("inf")
    closest_pair = ()

    if len(set(numbers)) != len(numbers):
        for i in set(tuple(sorted((x, y))) for x in numbers for y in numbers if x != y):
            diff = abs(i[0] - i[1])
            if diff < min_diff:
                min_diff = diff
                closest_pair = i

    return closest_pair