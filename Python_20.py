from typing import List, Tuple


def find_closest_elements(nums: List[float], target: float) -> Tuple[float, float]:
    closest_pair = (float("inf"), float("-inf"))

    for num in nums:
        if abs(num - target) < abs(closest_pair[0] - target):
            if abs(num - target) == abs(closest_pair[0] - target):
                closest_pair = min((closest_pair, (num,)), key=lambda x: x[1])
            else:
                closest_pair = ((num),)

    return closest_pair