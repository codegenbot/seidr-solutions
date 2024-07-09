from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []
    max_sum = current_sum = max_number = max_result = max_start_index = 0
    for i in range(len(numbers)):
        if current_sum < 0:
            current_sum = 0
            max_start_index = i
        current_sum += numbers[i]
        max_sum = max(max_sum, current_sum)
        result.append(max(max_number, numbers[i], max_sum))
    return result