from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for sublist in [[num, delimiter] for num in numbers[:-1]] for x in sublist] + ([numbers[-1]] if numbers else [])