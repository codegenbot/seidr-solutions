from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    numbers = numbers[0].split()
    for i in range(len(numbers)):
        if i > 0:
            result.append(delimiter)
        result.append(int(numbers[i]))
    return result