from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([numbers[i], [delimiter]])
    return result