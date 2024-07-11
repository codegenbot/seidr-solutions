```
from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if len(numbers) < 2:
        return numbers
    
    result = [numbers[0]]
    
    for i in range(1, len(numbers)):
        result.extend([delimiter, numbers[i]])
    
    # Remove the extra delimiter
    if result:
        while result and isinstance(result[-1], int):
            result.pop()
    return result