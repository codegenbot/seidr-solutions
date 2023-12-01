from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for number in numbers for x in (number, delimiter)][:len(numbers)*2 - 1]