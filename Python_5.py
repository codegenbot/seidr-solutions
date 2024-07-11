from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if len(numbers) < 2:
        return numbers
    
    result = [numbers[0]]
    
    for i in range(1, len(numbers)):
        result.extend([delimiter])
        result.append(numbers[i-1])
    
    # Add the last number of the list
    result.extend([delimiter, numbers[-1]])
    
    return result