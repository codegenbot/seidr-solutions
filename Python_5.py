from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    return [val for pair in zip(numbers, [delimeter] * len(numbers)) for val in pair][:-1] if numbers else []