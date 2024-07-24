from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    return [item for sublist in [[num, delimeter] for num in numbers[:-1]] + [[numbers[-1]]] for item in sublist]