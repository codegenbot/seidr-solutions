from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    if len(numbers) == 0:
        return []
    
    max_numbers = [numbers[0]]
    current_max = numbers[0]
    
    for num in numbers[1:]:
        current_max = max(current_max, num)
        max_numbers.append(current_max)
    
    return max_numbers