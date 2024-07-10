from typing import List


def intersperse(list1: List[int], list2: List[int]) -> List[int]:
    result = []
    
    for num in list1:
        if list2:
            result.append(num)
            result.append(list2.pop(0))
        else:
            result.append(num)
            
    if list2:
        result.extend(list2)        
    return result