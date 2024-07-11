from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [delimeter]
    for i in range(len(numbers)):
        if i < len(numbers) - 1:
            result.extend([delimeter, numbers[i]])
        else:
            result.append(numbers[i])
    return result