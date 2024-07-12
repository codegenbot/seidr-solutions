from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if numbers:
        result = [delimiter]
        for num in numbers:
            result.extend([result.pop(), num])
        if result[-1] == delimiter:
            result.pop()
    else:
        return []
    return result