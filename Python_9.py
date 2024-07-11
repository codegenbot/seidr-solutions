from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_sum = [0] * len(numbers)
    max_sum[0] = numbers[0]
    
    for i in range(1, len(numbers)):
        max_sum[i] = max(max_sum[i-1], 0) + numbers[i]

    result = []
    current_max = 0
    for i in range(len(numbers)):
        if current_max < 0:
            current_max = numbers[i]
        else:
            current_max += numbers[i]
        result.append(current_max)
        
    return result