from typing import list
def intersperse(numbers: list[int], delimiter: int) -> list[int]:
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([num, delimiter])
    return result