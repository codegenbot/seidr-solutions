```
from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not all(isinstance(num, int) for num in numbers):
        raise ValueError("Numbers must be a list of integers")

    if not isinstance(delimiter, int):
        raise ValueError("Delimiter must be an integer")

    if len(numbers) <= 1:
        return numbers

    result = [numbers[0]]

    for i, num in enumerate(numbers[1:]):
        result.append(delimiter)
        result.append(num)

    else:
        result.insert(1, delimiter)

    return result