from typing import List


def intersperse(numbers: List[int], delimiter: str) -> list:
    result = [delimiter]
    for i in range(len(numbers)):
        result.extend([str(numbers[i]), delimiter])
    return result