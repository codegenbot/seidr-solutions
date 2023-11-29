from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for sublist in [[num, delimiter] for num in numbers] for x in sublist][:-1]