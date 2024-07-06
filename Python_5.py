from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if len(numbers) == 0:
        return []

    result = [delimiter]
    for i in range(len(numbers)):
        result.extend([numbers[i], delimiter])
    return result