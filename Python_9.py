```Python
from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    if len(numbers) < 2:
        return []
    
    max_so_far = numbers[0]
    result = [max_so_far]  # initialize the first element
    
    for num in numbers[1:]:
        max_so_far = max(num, max_so_far)
        result.append(max_so_far)
        
    return result