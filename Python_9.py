from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [
        max(nums[: i + 1])
        for i, nums in enumerate(sorted((num, num) for num in numbers))
    ]
    return result