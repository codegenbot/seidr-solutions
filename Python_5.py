from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    return (
        [x for num in numbers for x in [num, delimeter] if num != numbers[-1]]
        + [numbers[-1]]
        if numbers
        else []
    )