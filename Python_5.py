from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = [numbers[0]]
    for num in numbers[1:]:
        result.append(num)
        result.append(delimiter)
    return result