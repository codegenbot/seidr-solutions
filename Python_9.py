from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [
        max(nums) if i == 0 else max([nums[i], numbers[: i + 1][-1]])
        for i, nums in enumerate(numbers)
    ]
    return result