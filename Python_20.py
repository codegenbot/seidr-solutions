```
from typing import List, Tuple

def find_closest_elements(nums: List[int], target: int) -> Tuple[int, int]:
    left = 0
    right = len(nums) - 1
    closest_pair = (nums[left], nums[right])
    closest_diff = abs(target - nums[left]) + abs(target - nums[right])

    while left <= right:
        if abs(target - nums[left]) <= abs(target - nums[right]):
            if target - nums[left] > 0:
                right -= 1
            else:
                left += 1
        else:
            if target - nums[right] > 0:
                left += 1
            else:
                right -= 1

        if abs(target - nums[left]) + abs(target - nums[right]) < closest_diff:
            closest_pair = (nums[left], nums[right])
            closest_diff = abs(target - nums[left]) + abs(target - nums[right])

    return closest_pair