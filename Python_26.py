from typing import List

def remove_duplicates(nums: List[int]) -> List[int]:
    return [num for num in nums if nums.count(num) == 1]