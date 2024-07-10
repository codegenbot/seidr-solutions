from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_sum = 0
    result = []
    
    for i in range(len(numbers)):
        max_sum += numbers[i]
        if i > 0:
            max_sum -= numbers[i-1]
        result.append(max(max_sum, 0))
        
    return result