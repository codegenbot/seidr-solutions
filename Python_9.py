from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []
    max_sum = current_max = sum(numbers[:1])
    result = [current_max]
    
    for i in range(1, len(numbers)):
        if numbers[i] > current_max:
            current_max = numbers[i]
        else:
            current_max += numbers[i]
        
        if current_max > max_sum:
            max_sum = current_max
        
        result.append(max(current_max, max_sum))
    
    return result