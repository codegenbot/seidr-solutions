from typing import List


def max_rolling_sum(numbers: List[int], k: int) -> List[int]:
    result = [
        sum(
            max(nums[i - k + 1 : i + 1])
            for nums in (iter(lambda: numbers[i:]) for i in range(k - 1, len(numbers)))
        )
    ]
    return result