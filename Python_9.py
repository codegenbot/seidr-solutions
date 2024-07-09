from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []
    max_sum = current_sum = sum(numbers[:])
    result = [current_sum]
    
    for i in range(1, len(numbers)):
        current_sum = current_sum - numbers[i-1] + numbers[i]
        if current_sum > max_sum:
            max_sum = current_sum
        result.append(max_sum)
        
    return result