```
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_sum = numbers[0]
    result = [numbers[0]]
    
    for num in numbers[1:]:
        if max_sum < 0:
            max_sum = num
        else:
            max_sum += num
        
        result.append(max_sum)
        
    return result