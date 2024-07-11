from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [delimeter]
    result.extend([numbers[0]])
    for i in range(1, len(numbers)):
        result.extend([delimeter, numbers[i]])
    result.append(delimeter)
    return result