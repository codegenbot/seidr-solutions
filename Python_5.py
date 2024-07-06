from typing import list

def intersperse(numbers: list[int], delimiter: int) -> list[int]:
    if len(numbers) == 0:
        return []
    
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([result[-1], delimiter, numbers[i]])
    return result