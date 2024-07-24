from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [elem for sublist in [[num, delimiter] for num in numbers[:-1]] + [[numbers[-1]]] for elem in sublist]