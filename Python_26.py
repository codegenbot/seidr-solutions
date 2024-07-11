from typing import List
from collections import OrderedDict


def remove_duplicates(numbers: List[int]) -> List[int]:
    if len(numbers) < 2:
        return numbers
    seen = OrderedDict()
    result = []
    
    for num in numbers:
        if num not in seen:
            seen[num] = None
            result.append(num)
            
    return result