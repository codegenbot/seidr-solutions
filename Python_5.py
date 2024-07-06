from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not all(isinstance(n, int) for n in numbers):
        raise ValueError("Input must be a list of integers")
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([result[-1], delimiter, numbers[i]])
    return result