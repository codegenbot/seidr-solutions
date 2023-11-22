from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for x in numbers for _ in [x, delimiter]]