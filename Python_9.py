```Python
from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_sum = 0
    result = [0] * len(numbers)
    
    for i in range(len(numbers)):
        if max_sum < 0:
            max_sum = numbers[i]
        else:
            max_sum += numbers[i]
        
        result[i] = max_sum
        
    return result