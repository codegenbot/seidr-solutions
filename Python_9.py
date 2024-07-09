from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_sum = 0
    result = []
    
    for i in range(len(numbers)):
        current_sum = sum(numbers[:i+1])
        
        if current_sum > max_sum:
            max_sum = current_sum
        
        result.append(max_sum)
    
    return result