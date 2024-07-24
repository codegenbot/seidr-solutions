from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for num in numbers[:-1]:
        result.extend([num, delimeter])
    result.append(numbers[-1])  # add the last number without delimiter
    return result