from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [val for pair in zip(numbers, [delimiter] * (len(numbers) - 1)) for val in pair] + numbers[-1:] if numbers else []