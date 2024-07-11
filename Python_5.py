from typing import List

def intersperse(list1: List[int], list2: List[int], delimeter: int) -> List[int]:
    result = [list1[0]]
    for i in range(0, len(list1), 2):
        if i < len(list1) - 1:
            result.extend([list1[i], delimeter])
        else:
            result.extend([list1[i]])
    for num in list2:
        result.append(num)
    return result