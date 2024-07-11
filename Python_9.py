from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_sum = 0
    result = []
    
    for num in numbers:
        max_sum = max(num, max_sum + num)
        result.append(max_sum)
        
    return result