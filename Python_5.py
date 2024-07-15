from typing import List


def intersperse(numbers: List[int], delimiter: str) -> list:
    result = [str(numbers[0])]
    for i in range(1, len(numbers)):
        result.extend([delimiter])
        result.append(str(numbers[i]))
    return result