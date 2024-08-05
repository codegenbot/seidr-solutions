from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return sum([[num, delimiter] for num in numbers], [])[:-1]