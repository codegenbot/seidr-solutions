from typing import List


def intersperse(numbers: List[int], delimiter: str) -> list:
    result = []
    for i in range(len(numbers)):
        if i > 0:
            result.extend([delimiter])
        result.append(str(numbers[i]))
    return result