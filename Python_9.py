from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    result = []
    
    if not all(isinstance(num, int) for num in numbers):
        raise TypeError("Input list should only contain integers")
    
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    
    return result