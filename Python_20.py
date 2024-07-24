from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    pairs = [(x, y) for x in numbers for y in numbers if x < y]
    return min(pairs, key=lambda pair: abs(pair[1] - pair[0]))