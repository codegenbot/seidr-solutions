from typing import List
from itertools import chain

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return list(chain.from_iterable(zip(numbers, [delimiter] * len(numbers)))[:-1]