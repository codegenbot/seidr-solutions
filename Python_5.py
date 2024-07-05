from typing import List

def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    return [elem for num in numbers[:-1] for elem in (num, delimeter)] + numbers[-1:]