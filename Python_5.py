```Python
from typing import List


def intersperse(list1: List[int], list2: List[int]) -> List[int]:
    result = []
    
    # Add all elements of the first list
    for num in list1:
        if list2:
            result.append(num)
            result.append(list2.pop(0))
        else:
            result.append(num)
            
    # Add any remaining elements from the second list
    if list2:
        result.extend([str(i) for i in list2])
        
    return result