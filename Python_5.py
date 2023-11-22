from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for n in numbers for x in [n, delimiter]][:-1]