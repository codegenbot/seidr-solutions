```
from typing import List


def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    if len(numbers) == 0:
        return [delimeter]
    elif len(numbers) == 1:
        return [delimeter, numbers[0], delimeter]
    else:
        result = [numbers[0]]
        for num in numbers[1:]:
            result.extend([num, delimeter])
        result.append(delimeter)
        return result