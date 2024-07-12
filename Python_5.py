from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for num in numbers:
        if len(result) % 2 == 0:
            result.append(delimiter)
        result.append(num)
    return result