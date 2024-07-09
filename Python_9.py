from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []
    max_sum = current_sum = sum(numbers[:1])
    result = [current_sum]
    
    for num in numbers[1:]:
        current_sum = max(num, current_sum + num)
        result.append(current_sum)
        
    return result