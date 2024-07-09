from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = [max([numbers[0], min(numbers)])]
    
    for i in range(1, len(numbers)):
        result.append(max(result[-1], numbers[i]))
        
    return result