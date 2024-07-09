from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    if not all(isinstance(num, int) for num in numbers):
        raise ValueError("Input list must contain only integers")
        
    max_num = float("-inf")
    result = []
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result