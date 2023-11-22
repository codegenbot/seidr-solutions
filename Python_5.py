from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [
        x
        for i, num in enumerate(numbers)
        for x in [num, delimiter]
        if i < len(numbers) - 1
    ]