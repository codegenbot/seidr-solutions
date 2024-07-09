from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []
    result = [numbers[0]]
    current_max = numbers[0]
    for num in numbers[1:]:
        current_max = max(num, current_max)
        result.append(current_max)
    return result