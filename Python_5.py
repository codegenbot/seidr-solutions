from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [delimeter]  
    for i in range(len(numbers)):
        if i > 0:
            result.extend([delimeter, numbers[i]])
        else:
            result.extend([numbers[0]])
    result.append(delimeter)  
    return result