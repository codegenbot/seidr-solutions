from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_sum = 0
    result = [0] * len(numbers)
    
    for i in range(len(numbers)):
        max_sum = max(numbers[i], max_sum + numbers[i])
        result[i] = max_sum
    
    return result