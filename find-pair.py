from typing import List

def find_pair(nums: List[int], target: int) -> List[int]:
    complements = {}
    for num in nums:
        complement = target - num
        if complement in complements:
            return [complement, num]
        complements[num] = True
    return []