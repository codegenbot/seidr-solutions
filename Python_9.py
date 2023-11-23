from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_so_far = None
    
    for num in numbers:
        if max_so_far is None or num >= max_so_far:
            max_so_far = num
        result.append(max_so_far)
    
    return result