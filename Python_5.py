from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [
        x for pair in zip(numbers[:-1], [delimiter] * (len(numbers) - 1)) for x in pair
    ] + [numbers[-1]]