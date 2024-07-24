from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = [x for x in numbers for _ in range(2)]
    return result[:-1]