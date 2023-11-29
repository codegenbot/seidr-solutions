from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = [num for sublist in zip(numbers, [delimiter] * len(numbers)) for num in sublist]
    return result