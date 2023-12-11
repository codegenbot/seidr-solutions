from typing import List

def find_pair(nums: List[int], target: int) -> List[int]:
    seen = {}
    for num in nums:
        complement = target - num
        if complement in seen:
            return [complement, num]
        seen[num] = True
    return []