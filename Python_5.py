from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not numbers:
        return []

    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimiter, numbers[i]])
    if result and (len(result) > 2 or result[-1] != delimiter):
        result.append(delimiter)
    return result