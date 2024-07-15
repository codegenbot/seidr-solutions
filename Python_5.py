from typing import List


def intersperse(numbers: List[int], delimeter: str) -> list:
    if len(numbers) == 0:
        return []
    if delimeter:
        result = [delimeter]
    else:
        result = []
    for i in range(len(numbers)):
        result.extend([str(numbers[i])])
        if i < len(numbers) - 1:
            result.append(delimeter)
    return result