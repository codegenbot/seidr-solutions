from typing import List

def intersperse(numbers: List[int], delimeter: str) -> List[str]:
    result = [str(numbers[0])]
    for i in range(1, len(numbers)):
        result.extend([str(result[-1]), delimeter, str(numbers[i])])
    return result