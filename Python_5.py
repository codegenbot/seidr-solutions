from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    result.extend(numbers)
    return [item for sublist in zip(result, [delimiter] * (len(result)-1)) for item in sublist] + [result[-1]]