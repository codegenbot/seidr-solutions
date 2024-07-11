from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(0, len(numbers) - 1):
        result.extend([numbers[i], delimeter])
    result.append(numbers[-1])
    return result