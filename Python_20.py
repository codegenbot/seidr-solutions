from typing import List, Tuple


def find_closest_elements(nums: List[float], target: float) -> Tuple[float, float]:
    left = min((i for i in nums if i < target), default=None)
    right = max((i for i in nums if i > target), default=None)

    closest_pair = (left, right) if left and right else ()

    return closest_pair