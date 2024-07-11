```
from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = [numbers[0]]
    max_ = numbers[0]
    for num in numbers[1:]:
        max_ = max(max_, num)
        result.append(max_)
    return result