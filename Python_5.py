from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        if i == len(numbers) - 1:
            result.append(numbers[i])
        else:
            result.extend([delimeter] + [result[-1]] + [numbers[i]])
    return result