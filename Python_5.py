from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = [delimiter]
    for num in numbers:
        result.extend([delimiter, num])
        if num < len(numbers) - 1:
            result.append(delimiter)
    return result