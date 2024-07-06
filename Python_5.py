from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if len(numbers) == 0:
        return []

    result = [numbers[0]]
    for i in range(1, len(numbers)):
        if i != 0:
            result.extend([result[-1], delimiter, numbers[i]])

    return result