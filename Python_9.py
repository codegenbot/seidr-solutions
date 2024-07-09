from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_so_far = numbers[0]
    result = []
    
    for num in numbers:
        max_so_far = max(num, max_so_far)
        result.append(max_so_far)
        
    return result