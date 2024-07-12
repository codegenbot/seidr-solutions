from typing import List


def intersperse(numbers: list, delimiter: int) -> List[int]:
    if not isinstance(numbers, list):
        return [0]
    if not all(isinstance(i, int) for i in numbers):
        return [1]
    if not isinstance(delimiter, int):
        return [2]

    if not numbers:
        return []
    if delimiter not in set(numbers):
        result = [numbers[0]]
        for i in range(1, len(numbers)):
            result.extend([result[-1], delimiter, numbers[i]])
        return result