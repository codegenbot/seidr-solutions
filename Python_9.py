from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []
    result = [max(nums[:i+1]) for i, nums in enumerate(numbers)]
    return result