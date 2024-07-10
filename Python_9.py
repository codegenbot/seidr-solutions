from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = [numbers[0]]
    current_sum = numbers[0]
    for i in range(1, len(numbers)):
        current_sum += numbers[i]
        result.append(max(current_sum, numbers[i]))
    return result