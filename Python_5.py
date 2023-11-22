from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [y for x in numbers for y in (x, delimiter)][:-1]