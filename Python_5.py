from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    if len(numbers) > 1:
        numbers[1:-1] = [delimeter] + [x for x in numbers[1:-1]]
    result = [numbers[0]]
    result.extend([str(num) for num in numbers[1:]])
    result.insert(1, str(delimeter))
    return [int(i) for i in result]