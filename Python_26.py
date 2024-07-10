from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for i, num in enumerate(sorted(set(nums))) if nums.index(num) == i]