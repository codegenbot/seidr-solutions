from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([result[-1], delimiter])
    if len(result) < len(numbers):
        result.append(numbers[-1])
    return result