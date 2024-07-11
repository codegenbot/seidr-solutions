from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for num in numbers[1:]:
        if len(result) > 1:
            result.extend([delimeter])
        result.append(num)
    return result