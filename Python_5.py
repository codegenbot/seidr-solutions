from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimeter, numbers[i]])
    result.append(numbers[-1])  
    return result