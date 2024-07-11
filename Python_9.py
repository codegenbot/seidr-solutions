from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_ending_here = numbers[0]
    result = [max_ending_here]
    
    for num in numbers[1:]:
        max_ending_here = max(num, max_ending_here + num)
        result.append(max_ending_here)
        
    return result