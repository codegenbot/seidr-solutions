from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return list(map(int, ''.join(map(str, numbers)).split(str(delimiter))))