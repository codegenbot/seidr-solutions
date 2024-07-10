from typing import List


def intersperse(list1: List[int], list2: List[int]) -> List[int]:
    result = []
    
    while list1 or list2:
        if list1 and (not list2 or len(result) % 2 == 0):
            result.append(list1.pop(0))
        elif list2:
            result.append(list2.pop(0))            
        else:
            result.append(list1.pop(0))            
    return result