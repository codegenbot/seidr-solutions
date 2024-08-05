from typing import List, Tuple


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    
    if not all(isinstance(num, int) for num in numbers):
        raise ValueError("Input must be a list of integers")
    
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    
    return result