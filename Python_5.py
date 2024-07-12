from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not numbers:
        return []
    result = [numbers[0]]
    for num in numbers[1:]:
        if num == delimiter:
            if result[-1] != delimiter:
                result.append(delimiter)
        else:
            while len(result) > 1 and result[-1] == delimiter:
                result.pop()
            if not result or result[-1] != delimiter:
                result.append(delimiter)
        result.append(num)
    return result