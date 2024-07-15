from typing import List


def intersperse(numbers: List[int], delimiter: str) -> list:
    result = []
    result.extend([delimiter])
    for i in range(len(numbers)):
        result.append(str(numbers[i]))
        if i < len(numbers)-1:
            result.extend([delimiter])
    return result