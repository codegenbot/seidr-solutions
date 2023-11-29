from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i, num in enumerate(numbers):
        result.extend([num, delimiter])
    result.pop()  # Remove the extra delimiter at the end
    return result