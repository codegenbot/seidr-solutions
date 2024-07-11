from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    if len(numbers) < 2:
        return numbers

    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([delimeter])
        result.append(numbers[i])

    result.append(delimeter)
    return result