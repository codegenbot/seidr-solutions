from typing import List, int

def intersperse(numbers: list[int], delimeter: int) -> list[int]:
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([num, delimeter])
    return result