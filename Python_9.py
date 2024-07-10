from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    current_sum = 0
    for i in range(len(numbers)):
        current_sum += numbers[i]
        result.append(max(current_sum, numbers[i]))
    return result