```
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_seen_so_far = numbers[0]
    current_rolling_max = [max_seen_so_far]
    
    for num in numbers[1:]:
        if num > max_seen_so_far:
            max_seen_so_far = num
        current_rolling_max.append(max_seen_so_far)
        
    return current_rolling_max