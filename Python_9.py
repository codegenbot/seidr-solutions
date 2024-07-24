from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [numbers[0]]
    current_max = numbers[0]
    
    for num in numbers[1:]:
        if num > current_max:
            current_max = num
        result.append(current_max)
        
    return result