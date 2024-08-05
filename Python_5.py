from typing import List
from itertools import chain, zip_longest


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [
        elem
        for elem in chain.from_iterable(
            zip_longest(numbers, [delimiter] * len(numbers), fillvalue=None)
        )
        if elem is not None
    ]