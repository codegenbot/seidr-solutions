from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if numbers:
        result = [numbers[0]] if numbers else []
        for num in numbers[1:]:
            result.extend([result.pop(), num])
        if result[-1] == delimiter:
            result.pop()
    return result