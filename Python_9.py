from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_sum = 0
    result = [0] * len(numbers)
    
    for i in range(len(numbers)):
        if i == 0:
            result[i] = numbers[i]
        else:
            result[i] = max(result[i-1], numbers[i])
            
    return result