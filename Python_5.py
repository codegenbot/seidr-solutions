from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([result[-1], delimeter, numbers[i]])
    return (
        [delimeter] + result[1:-1] + [delimeter, numbers[-1]]
        if len(numbers) > 1
        else [delimeter, *numbers]
    )